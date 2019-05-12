#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"


extern "C" double dodawanie(double argument1,double argument2);
extern "C" double odejmowanie(double argument1,double argument2);
extern "C" double mnozenie(double argument1,double argument2);
extern "C" double dzielenie(double argument1,double argument2);
extern "C" double sinus(double argument1);
extern "C" double cosinus(double argument1);
extern "C" double tangens(double argument1);
extern "C" double cotangens(double argument1);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);

    //wlaczam te cztery przyciski do testow, musi dzialac przekazywanie double do funkcji oraz cala funkcja w assemblerze
    ui->znakplus->setEnabled(true);
    ui->znakminus->setEnabled(true);
    ui->znakmnoz->setEnabled(true);
    ui->znakdziel->setEnabled(true);
    ui->znaksin->setEnabled(true);
    ui->znakcos->setEnabled(true);
    ui->znaktg->setEnabled(true);
    ui->znakctg->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_znakplus_clicked()
{
    double wynik = dodawanie(2.1234561,3.1234561);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakminus_clicked()
{
    double wynik = odejmowanie(3.1234561,2.1234561);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakmnoz_clicked()
{
    double wynik = mnozenie(2,3);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakdziel_clicked()
{
    double wynik = dzielenie(2,3);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znak1_clicked()
{

}

void MainWindow::on_znak2_clicked()
{

}

void MainWindow::on_znak3_clicked()
{

}

void MainWindow::on_znak4_clicked()
{

}

void MainWindow::on_znak5_clicked()
{

}

void MainWindow::on_znak6_clicked()
{

}

void MainWindow::on_znak7_clicked()
{

}

void MainWindow::on_znak8_clicked()
{

}

void MainWindow::on_znak9_clicked()
{

}

void MainWindow::on_znakkropka_clicked()
{

}

void MainWindow::on_znak0_clicked()
{

}

void MainWindow::on_znakclear_clicked()
{
    ui->ekran->setText("");
}

void MainWindow::on_znaksin_clicked()
{
    double wynik = sinus(90.0000);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakcos_clicked()
{
    double wynik = cosinus(90);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znaktg_clicked()
{
    double wynik = tangens(90);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakctg_clicked()
{
    double wynik = cotangens(90);
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakrowna_clicked()
{

}
