#include "picture.h"
#include <QPainter>

Picture::Picture(QWidget *parent) : QWidget(parent)
{

}

void Picture::paintEvent(QPaintEvent * paintEvent)
{
   QPainter * painterPicture = new QPainter(this);

   painterPicture->setBrush(Qt::green);
   painterPicture->drawEllipse(0,0,50,50);


}
