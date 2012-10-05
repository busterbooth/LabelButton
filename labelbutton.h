/*
LabelButton: used to accept input on QLabels
 */
#include <QLabel>
#include <QMouseEvent>
class LabelButton : public QLabel
{
    Q_OBJECT
    
public:
    LabelButton(QWidget *parent);
    LabelButton(QWidget *parent, QRect geo, QString imageString);
private:
    void mouseReleaseEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:
    void Clicked(LabelButton *label);
    void Pressed(LabelButton *label);
};
