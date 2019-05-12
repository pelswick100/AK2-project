#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "string"

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
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=true;
    argument1dod=true;
    bylakropka=false;
    operacja=0;
    argument1="+";
    ui->ekran->setText(QString(argument1));
    dzialanie="";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_znakplus_clicked()
{
    operacja=1;
    dzialanie=argument1+" + ";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=false;
    argument2dod=true;
    bylakropka=false;
    argument2="+";
    ui->ekran->setText(QString(argument2));
}

void MainWindow::on_znakminus_clicked()
{
    operacja=2;
    dzialanie=argument1+ " - ";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=false;
    argument2dod=true;
    bylakropka=false;
    argument2="+";
    ui->ekran->setText(QString(argument2));
}

void MainWindow::on_znakmnoz_clicked()
{
    operacja=3;
    dzialanie=argument1+ " * ";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=false;
    argument2dod=true;
    bylakropka=false;
    argument2="+";
    ui->ekran->setText(QString(argument2));
}

void MainWindow::on_znakdziel_clicked()
{
    operacja=4;
    dzialanie=argument1+" / ";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=false;
    argument2dod=true;
    bylakropka=false;
    argument2="+";
    ui->ekran->setText(QString(argument2));
}

void MainWindow::on_znak1_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"1";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"1";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak2_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"2";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"2";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak3_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"3";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"3";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak4_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"4";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"4";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak5_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"5";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"5";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak6_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"6";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"6";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak7_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"7";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"7";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak8_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"8";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"8";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak9_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"9";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"9";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znakkropka_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+".";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        ui->znakkropka->setEnabled(false);
        bylakropka=true;
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+".";
        ui->ekran->setText(QString(argument2));
        ui->znakkropka->setEnabled(false);
        bylakropka=true;
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znak0_clicked()
{
    if(czypierwszyarg)
    {
        argument1=argument1+"0";
        ui->znakplus->setEnabled(true);
        ui->znakminus->setEnabled(true);
        ui->znakmnoz->setEnabled(true);
        ui->znakdziel->setEnabled(true);
        ui->znaksin->setEnabled(true);
        ui->znakcos->setEnabled(true);
        ui->znaktg->setEnabled(true);
        ui->znakctg->setEnabled(true);
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->ekran->setText(QString(argument1));
    }
    else {
        argument2=argument2+"0";
        ui->ekran->setText(QString(argument2));
        if(!bylakropka){
        ui->znakkropka->setEnabled(true);
        }
        ui->znakrowna->setEnabled(true);
    }
}

void MainWindow::on_znakclear_clicked()
{
    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    czypierwszyarg=true;
    argument1dod=true;
    bylakropka=false;
    argument1="+";
    argument2="";
    ui->ekran->setText(QString(argument1));
    ui->ekran2->setText(QString(""));

    ui->znak0->setEnabled(true);
    ui->znak1->setEnabled(true);
    ui->znak2->setEnabled(true);
    ui->znak3->setEnabled(true);
    ui->znak4->setEnabled(true);
    ui->znak5->setEnabled(true);
    ui->znak6->setEnabled(true);
    ui->znak7->setEnabled(true);
    ui->znak8->setEnabled(true);
    ui->znak9->setEnabled(true);
    ui->znakujemny->setEnabled(true);
}

void MainWindow::on_znaksin_clicked()
{
    double arg1=argument1.toDouble();
    double wynik = sinus(arg1);
    ui->ekran->setText(QString::number(wynik));
    dzialanie="sin("+argument1+")";
    ui->ekran2->setText(QString(dzialanie));
        ui->znakplus->setEnabled(false);
        ui->znakminus->setEnabled(false);
        ui->znakmnoz->setEnabled(false);
        ui->znakdziel->setEnabled(false);
        ui->znaksin->setEnabled(false);
        ui->znakcos->setEnabled(false);
        ui->znaktg->setEnabled(false);
        ui->znakctg->setEnabled(false);
        ui->znakkropka->setEnabled(false);
        ui->znakrowna->setEnabled(false);
        ui->znak0->setEnabled(false);
        ui->znak1->setEnabled(false);
        ui->znak2->setEnabled(false);
        ui->znak3->setEnabled(false);
        ui->znak4->setEnabled(false);
        ui->znak5->setEnabled(false);
        ui->znak6->setEnabled(false);
        ui->znak7->setEnabled(false);
        ui->znak8->setEnabled(false);
        ui->znak9->setEnabled(false);
        ui->znakujemny->setEnabled(false);

}

void MainWindow::on_znakcos_clicked()
{
    double arg1=argument1.toDouble();
    double wynik = cosinus(arg1);
    ui->ekran->setText(QString::number(wynik));
    dzialanie="cos("+argument1+")";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    ui->znak0->setEnabled(false);
    ui->znak1->setEnabled(false);
    ui->znak2->setEnabled(false);
    ui->znak3->setEnabled(false);
    ui->znak4->setEnabled(false);
    ui->znak5->setEnabled(false);
    ui->znak6->setEnabled(false);
    ui->znak7->setEnabled(false);
    ui->znak8->setEnabled(false);
    ui->znak9->setEnabled(false);
    ui->znakujemny->setEnabled(false);
}

void MainWindow::on_znaktg_clicked()
{
    double arg1=argument1.toDouble();
    double wynik = tangens(arg1);
    ui->ekran->setText(QString::number(wynik));
    dzialanie="tg("+argument1+")";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    ui->znak0->setEnabled(false);
    ui->znak1->setEnabled(false);
    ui->znak2->setEnabled(false);
    ui->znak3->setEnabled(false);
    ui->znak4->setEnabled(false);
    ui->znak5->setEnabled(false);
    ui->znak6->setEnabled(false);
    ui->znak7->setEnabled(false);
    ui->znak8->setEnabled(false);
    ui->znak9->setEnabled(false);
    ui->znakujemny->setEnabled(false);
}

void MainWindow::on_znakctg_clicked()
{
    double arg1=argument1.toDouble();
    double wynik = cotangens(arg1);
    ui->ekran->setText(QString::number(wynik));
    dzialanie="ctg("+argument1+")";
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    ui->znak0->setEnabled(false);
    ui->znak1->setEnabled(false);
    ui->znak2->setEnabled(false);
    ui->znak3->setEnabled(false);
    ui->znak4->setEnabled(false);
    ui->znak5->setEnabled(false);
    ui->znak6->setEnabled(false);
    ui->znak7->setEnabled(false);
    ui->znak8->setEnabled(false);
    ui->znak9->setEnabled(false);
    ui->znakujemny->setEnabled(false);
}

void MainWindow::on_znakrowna_clicked()
{
    double wynik=0;
    double arg1=argument1.toDouble();
    double arg2=argument2.toDouble();
    if (operacja==1)
    {
        wynik = dodawanie(arg2,arg1);
    }
    else if (operacja==2)
    {
        wynik = odejmowanie(arg2,arg1);
    }
    else if (operacja==3)
    {
        wynik = mnozenie(arg2,arg1);
    }
    else if (operacja==4)
    {
        wynik = dzielenie(arg2,arg1);

    }
    dzialanie=dzialanie+argument2+" = ";
    ui->ekran->setText(QString::number(wynik));
    ui->ekran2->setText(QString(dzialanie));

    ui->znakplus->setEnabled(false);
    ui->znakminus->setEnabled(false);
    ui->znakmnoz->setEnabled(false);
    ui->znakdziel->setEnabled(false);
    ui->znaksin->setEnabled(false);
    ui->znakcos->setEnabled(false);
    ui->znaktg->setEnabled(false);
    ui->znakctg->setEnabled(false);
    ui->znakkropka->setEnabled(false);
    ui->znakrowna->setEnabled(false);
    ui->znak0->setEnabled(false);
    ui->znak1->setEnabled(false);
    ui->znak2->setEnabled(false);
    ui->znak3->setEnabled(false);
    ui->znak4->setEnabled(false);
    ui->znak5->setEnabled(false);
    ui->znak6->setEnabled(false);
    ui->znak7->setEnabled(false);
    ui->znak8->setEnabled(false);
    ui->znak9->setEnabled(false);
    ui->znakujemny->setEnabled(false);

}

void MainWindow::on_znakujemny_clicked()
{
    if(czypierwszyarg)
    {
       argument1.remove(0,1);

       if(argument1dod)
       {
          argument1="-"+argument1;
          argument1dod=false;
       }
       else {
          argument1="+"+argument1;
          argument1dod=true;
       }
       ui->ekran->setText(QString(argument1));
    }
    else
    {
       argument2.remove(0,1);

       if(argument2dod)
       {
           argument2="-"+argument2;
           argument2dod=false;
       }
       else {
           argument2="+"+argument2;
           argument2dod=true;
       }
       ui->ekran->setText(QString(argument2));
    }
}
