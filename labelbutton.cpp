/*
 File: labelbutton.cpp
 Project: BusterBooth
 Author: Eddie Boswell
 Company: The Buster Booth Company
 Description:
Creates a clickable QLabel
 */
#include "labelbutton.h"
#include <QString>
#include <QRect>
#include <QCursor>
#include <QPixmap>
/*
 CONSTRUCTOR:LabelButton
 constructs an empty label button
 */
LabelButton::LabelButton(QWidget *parent) : QLabel(parent)
{
        this->setCursor(QCursor(Qt::PointingHandCursor));
        this->setStyleSheet(QString::fromUtf8("background:\"transparent\";"));
        this->setScaledContents(true);
}
LabelButton::LabelButton(QWidget *parent, QRect geo, QString imageString) : QLabel(parent)
{
        this->setGeometry(geo);
        this->setCursor(QCursor(Qt::PointingHandCursor));
        this->setStyleSheet(QString::fromUtf8("background:\"transparent\";"));
        this->setScaledContents(true);
        this->setPixmap(QPixmap(imageString));
}
/*
 FUNCTION:mouseReleaseEvent
 grabs the mouse release event and sends it to its parent in a form that is readable
 */
void LabelButton::mouseReleaseEvent(QMouseEvent *event){
    emit Clicked(this);
    event->accept();
}
/*
 FUNCTION:mousePressEvent
 grabs the mouse press event and sends it to its parent in a form that is readable
 */
void LabelButton::mousePressEvent(QMouseEvent *event){
    emit Pressed(this);
    event->accept();
}
