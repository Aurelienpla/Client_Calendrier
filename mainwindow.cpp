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
   mCurrentInsertCol=0;
   mCurrentInsertRow=0;
   QPixmap pixMapPic1("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/1.jpg");
   QPixmap pixMapPic2("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/2.jpg");
   QPixmap pixMapPic3("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/3.jpg");
   QPixmap pixMapPic4("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/4.jpg");
   QPixmap pixMapPic5("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/5.jpg");
   QPixmap pixMapPic6("D:/Mes Documents/Cours/IMERIR/Qt/DM/images/6.jpg");
   QIcon iconPic1(pixMapPic1);
   QIcon iconPic2(pixMapPic2);
   QIcon iconPic3(pixMapPic3);
   QIcon iconPic4(pixMapPic4);
   QIcon iconPic5(pixMapPic5);
   QIcon iconPic6(pixMapPic6);
//   ui->tableWidget->setItem(0,0,new QTableWidgetItem(iconPic1,""));
//   ui->tableWidget->setItem(0,1,new QTableWidgetItem(iconPic2,""));
//   ui->tableWidget->setItem(0,2,new QTableWidgetItem(iconPic3,""));
//   ui->tableWidget->setItem(1,0,new QTableWidgetItem(iconPic4,""));


   //connection de la Dialog
   connect(ui->mDialogButton,SIGNAL(accepted()),this,SLOT(onDialogAccepted()));
   connect(ui->mDialogButton,SIGNAL(rejected()),qApp,SLOT(quit()));

   addIcon(iconPic1);
   addIcon(iconPic2);
   addIcon(iconPic3);
   addIcon(iconPic4);
   addIcon(iconPic5);
   addIcon(iconPic6);
}

MainWindow::~MainWindow()
{
   delete ui;
}


void MainWindow::onDialogAccepted()
{

}

void MainWindow::onDialogRejected()
{
}

void MainWindow::addIcon(QIcon icone)
{
   //si on essai d'insérer dans un ligne qui n'existe pas (tableau trop petit)
   //on creer une ligne supplémentaire (le nombre de colonne est fixe)
   if(mCurrentInsertRow >= ui->tableWidget->rowCount()){
      ui->tableWidget->insertRow(ui->tableWidget->rowCount());
   }
   ui->tableWidget->setItem(mCurrentInsertRow,mCurrentInsertCol,new QTableWidgetItem(icone,""));

   //On incrémente la position de la prochaine image à insérer d'abord en colonne
   //si fin de la colone on passe à la ligne suivante
   mCurrentInsertCol++;
   if(mCurrentInsertCol >= ui->tableWidget->columnCount()){
      mCurrentInsertCol = 0;
      mCurrentInsertRow++;
   }
}
