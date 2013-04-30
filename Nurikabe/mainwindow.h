#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "tablero.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    tablero *t;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionOpen_file_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
