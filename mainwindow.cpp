#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTableWidgetItem>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   QPixmap pixMapPic1("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/1.jpg");
   QPixmap pixMapPic2("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/2.jpg");
   QPixmap pixMapPic3("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/3.jpg");
   QPixmap pixMapPic4("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/4.jpg");
   QIcon iconPic3(pixMapPic3);
   QIcon iconPic2(pixMapPic2);
   QIcon iconPic1(pixMapPic1);
   QIcon iconPic4(pixMapPic4);
   QTableWidgetItem tableItemPic1(iconPic1,"1");
   QTableWidgetItem tableItemPic2(iconPic2,"2");
   QTableWidgetItem tableItemPic3(iconPic3,"3");
   QTableWidgetItem tableItemPic4(iconPic4,"4");
   ui->tableWidget->setItem(0,0,new QTableWidgetItem(iconPic1,"1"));
   ui->tableWidget->setItem(0,1,new QTableWidgetItem(iconPic2,"2"));
   ui->tableWidget->setItem(0,2,new QTableWidgetItem(iconPic3,"3"));
   ui->tableWidget->setItem(1,0,new QTableWidgetItem(iconPic4,"4"));
   //ui->tableWidget->item(1,0)->setIcon(iconPic1);
   //ui->tableWidget->item(0,1)->setIcon(iconPic2);
   //ui->tableWidget->item(0,2)->setIcon(iconPic3);
   //ui->tableWidget->item(1,0)->setIcon(iconPic4);

   //ui->tableWidget->item(0,0)->setIcon(*iconPic1);
//   ui->tableWidget->item(0,2)->setIcon(*iconPic2);
//   ui->tableWidget->item(0,3)->setIcon(*iconPic3);
//   ui->tableWidget->item(2,0)->setIcon(*iconPic4);


}

MainWindow::~MainWindow()
{
   delete ui;
}
