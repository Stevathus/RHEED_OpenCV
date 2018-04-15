#include "RHEED_OpenCV.h"
#include <opencv2/core.hpp> // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/core/utility.hpp>
#include <opencv2/imgproc.hpp>  // Gaussian Blur
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp> // OpenCV window I/O
#include <opencv2/core/types.hpp> // Mouse events
#include <iostream>
#include <string>   // for strings
#include <iomanip>  // for controlling float print precision
#include <sstream>

cv::Point LineY;

static void OnMouse(int event, int x, int y, int flags, void* userdata)
{
	if (event == cv::EVENT_LBUTTONDBLCLK)
	{
		LineY.y = y;
		LineY.x = 0;
	}
}


RHEED_OpenCV::RHEED_OpenCV(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	ui.plot->addGraph();
	ui.plot->graph(0)->setLineStyle(QCPGraph::lsLine);


	cv::Mat frame;
	cv::Mat grey;
	cv::VideoCapture cap;
	cap.open(0);


	if (!cap.isOpened())
	{
		std::cerr << "ERROR! Unable to open camera\n" << std::endl;
		return;
	}
	std::cout << "Start grabbing" << std::endl << "Press any key to terminate" << std::endl;
	for (;;)
	{
		cap.read(frame);
		cap.read(grey);
		cvtColor(frame, grey, cv::COLOR_BGR2GRAY);
		if (frame.empty())
		{
			if (cv::waitKey(5) >= 0) break;

			std::cerr << "ERROR! Blank frame grabbed/n";
			break;
		}
		int cols = grey.size[1];
		line(grey, cv::Point(0, LineY.y), cv::Point(cols, LineY.y), cv::Scalar(255, 0, 0), 2, 8);
		cv::Mat LineTrace = grey.row(LineY.y);
		imshow("Live", frame);
		imshow("Grey", grey);
		cv::setMouseCallback("Grey", OnMouse, 0);

		if (cv::waitKey(5) >= 0) break;

	}

	// Git test
	
}

