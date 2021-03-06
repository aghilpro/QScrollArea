#ifndef MAINAPP_H
#define MAINAPP_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class MainApp;
}

class MainApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainApp(QWidget *parent = 0);
    ~MainApp();

private slots:
    void on_btnAddNew_clicked();

private:
    Ui::MainApp *ui;
};

#endif // MAINAPP_H
