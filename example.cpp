/*
 File: example.cpp
 Project: BusterBooth
 Author: Eddie Boswell
 Company: The Buster Booth Company
 Description:
Creates a clickable QLabel, then shows you how to connect it.
 */
#include "example.h"
#include <QString>
#include <QRectF>
#include <QCursor>
#include <QPixmap>
#include <QDebug>
/*
 CONSTRUCTOR:Example
 constructs a QWidget with a LabelButton
 */
Example::Example(QWidget *parent) : QWidget(parent)
{
    this->setGeometry(50,50,640,480);
    lb = new LabelButton(this, QRect(100,100,300,300), QString(":/photobooth.png"));
	connect(lb, SIGNAL(Clicked(LabelButton *)), this, SLOT(labelClicked(LabelButton *)));
	connect(lb, SIGNAL(Pressed(LabelButton *)), this, SLOT(labelDown(LabelButton *)));
	lb->show();
}
/*
 FUNCTION:labelClicked
	called when a user clicks a LabelButton
 */
void Example::labelClicked(LabelButton *label){
	qDebug() << label->winId() << "clicked";
}
/*
 FUNCTION:labelDown
	called when a user presses a label button
 */
void Example::labelDown(LabelButton *label){
	qDebug() << label->winId() << "pressed";
}
