#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RHEED_OpenCV.h"

class RHEED_OpenCV : public QMainWindow
{
	Q_OBJECT

public:
	RHEED_OpenCV(QWidget *parent = Q_NULLPTR);

	
private:
	Ui::RHEED_OpenCVClass ui;

	QVector<double> qv_x, qv_y;
};
