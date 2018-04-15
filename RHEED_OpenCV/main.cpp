#include "RHEED_OpenCV.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RHEED_OpenCV w;
	w.show();
	return a.exec();
}
