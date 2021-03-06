#ifndef NOTEPADQT_H
#define NOTEPADQT_H

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

private slots:
    void on_quitButton_clicked();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // NOTEPADQT_H
