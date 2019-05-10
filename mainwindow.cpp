#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"


extern "C" int dodawanie();
extern "C" int odejmowanie();
extern "C" int mnozenie();
extern "C" int dzielenie();

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_znakplus_clicked()
{
    int wynik = dodawanie();
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakminus_clicked()
{
    int wynik = odejmowanie();
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakmnoz_clicked()
{
    int wynik = mnozenie();
    ui->ekran->setText(QString::number(wynik));
}

void MainWindow::on_znakdziel_clicked()
{
    int wynik = dzielenie();
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

}

void MainWindow::on_znaksin_clicked()
{

}

void MainWindow::on_znakcos_clicked()
{

}

void MainWindow::on_znaktg_clicked()
{

}

void MainWindow::on_znakctg_clicked()
{

}

void MainWindow::on_znakrowna_clicked()
{

}
