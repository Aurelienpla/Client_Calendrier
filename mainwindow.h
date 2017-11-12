#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();

public slots:
   void onDialogAccepted();
   void onDialogRejected();

private:
   Ui::MainWindow *ui;
   //Conserve les cooronnée de l'élément insérer actuel
   int mCurrentInsertCol;
   int mCurrentInsertRow;

   //Ajoute une image au format QIcon dans QTableWidget à la fin dans la suite
   //logique (ajout ligne par ligne)
   void addIcon(QIcon icone);
};

#endif // MAINWINDOW_H
