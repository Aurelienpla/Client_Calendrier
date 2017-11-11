#ifndef PICTURE_H
#define PICTURE_H

#include <QWidget>

//Classe qui gere l'affichage d'une image
class Picture : public QWidget
{
   Q_OBJECT
public:
   Picture(QWidget *parent = nullptr);

signals:

public slots:

protected:
   void paintEvent(QPaintEvent * paintEvent);
};

#endif // PICTURE_H
