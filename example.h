/*
Example: how to use LabelButton
 */
#include "labelbutton.h"

class Example : public QWidget
{
    Q_OBJECT
    
public:
    Example(QWidget *parent=0);
private:
    LabelButton *lb;
private slots:
    void labelClicked(LabelButton *label);
    void labelDown(LabelButton *label);
};
