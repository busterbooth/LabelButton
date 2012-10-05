LabelButton
===========

Subclass of QLabel to make it clickable.

You can construct a LabelButton like this:

#include "labelbutton.h"
LabelButton *lb = new LabelButton(parent, geometry, imageString);

A LabelButton will emit the signals Clicked and Pressed.  Clicked is emitted on the QLabel mouseReleaseEvent, Pressed is emmited on the QLabel mousePressEvent.
