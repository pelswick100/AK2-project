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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_znak1_clicked();

    void on_znakplus_clicked();

    void on_znakminus_clicked();

    void on_znakmnoz_clicked();

    void on_znakdziel_clicked();

    void on_znak2_clicked();

    void on_znak3_clicked();

    void on_znak4_clicked();

    void on_znak5_clicked();

    void on_znak6_clicked();

    void on_znak7_clicked();

    void on_znak8_clicked();

    void on_znak9_clicked();

    void on_znakkropka_clicked();

    void on_znak0_clicked();

    void on_znakclear_clicked();

    void on_znaksin_clicked();

    void on_znakcos_clicked();

    void on_znaktg_clicked();

    void on_znakctg_clicked();

    void on_znakrowna_clicked();

private:
    Ui::MainWindow *ui;
    bool czykropka;
};

#endif // MAINWINDOW_H
