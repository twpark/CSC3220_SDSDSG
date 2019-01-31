#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dragonmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_hitButton_clicked();

    void on_reviveButton_clicked();

private:
    Ui::MainWindow *ui;
    DragonModel *dragonModel;

    void updateView();
};

#endif // MAINWINDOW_H
