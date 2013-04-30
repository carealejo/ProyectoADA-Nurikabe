#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "tablero.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QDialogButtonBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QMenu;
class QMenuBar;
class QPushButton;
class QTextEdit;
QT_END_NAMESPACE

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
    void createHorizontalGroupBox();

    enum {NumButtons = 4};

    Ui::MainWindow *ui;

    QGroupBox *horizontalGroupBox;
    QPushButton *b;
};

#endif // MAINWINDOW_H
