#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>


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
    void on_addTiletypeButton_clicked();

    void on_editTiletypeButton_clicked();

    void on_removeTiletypeButton_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *tiletypeList;
};

#endif // MAINWINDOW_H
