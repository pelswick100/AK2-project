#include "second.h"
#include "ui_second.h"
#include "QtMath"

Second::Second(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Second)
{
    ui->setupUi(this);

    ui->znak0->setShortcut(QKeySequence(Qt::Key_0));
    ui->znak1->setShortcut(QKeySequence(Qt::Key_1));
    ui->znak2->setShortcut(QKeySequence(Qt::Key_2));
    ui->znak3->setShortcut(QKeySequence(Qt::Key_3));
    ui->znak4->setShortcut(QKeySequence(Qt::Key_4));
    ui->znak5->setShortcut(QKeySequence(Qt::Key_5));
    ui->znak6->setShortcut(QKeySequence(Qt::Key_6));
    ui->znak7->setShortcut(QKeySequence(Qt::Key_7));
    ui->znak8->setShortcut(QKeySequence(Qt::Key_8));
    ui->znak9->setShortcut(QKeySequence(Qt::Key_9));

    ui->znakrowna->setShortcut(QKeySequence(Qt::Key_Return)); // znak rownosci dziala pod klawiszem Enter
    ui->znakbksp->setShortcut(QKeySequence(Qt::Key_Backspace));
    ui->znakclear->setShortcut(QKeySequence(Qt::Key_Delete));

    argument1="";
    licznik=0;
    ui->ekran->setText(QString(argument1));
    ui->ekran2->setText(QString(""));
}

Second::~Second()
{
    delete ui;
}

void Second::zablokowanie()
{
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
}

void Second::odblokowanie()
{
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
}

void Second::on_znak1_clicked()
{
    argument1=argument1+"1";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak2_clicked()
{
    argument1=argument1+"2";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak3_clicked()
{
    argument1=argument1+"3";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak4_clicked()
{
    argument1=argument1+"4";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak5_clicked()
{
    argument1=argument1+"5";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak6_clicked()
{
    argument1=argument1+"6";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak7_clicked()
{
    argument1=argument1+"7";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak8_clicked()
{
    argument1=argument1+"8";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak9_clicked()
{
    argument1=argument1+"9";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znak0_clicked()
{
    argument1=argument1+"0";
    ui->ekran->setText(QString(argument1));
    licznik++;
    if (licznik>8)
    {
        zablokowanie();
    }
}

void Second::on_znakclear_clicked()
{
    argument1="";
    licznik=0;
    odblokowanie();
    ui->ekran->setText(QString(argument1));
}

void Second::on_znakbksp_clicked()
{
    if(argument1.size() > 0) //jesli ciag niepusty (piewszy zawsze jest znak)
            {
                argument1.truncate(argument1.size() - 1);
                ui->ekran->setText(QString(argument1));
                if (licznik > 0)
                {
                licznik--;
                odblokowanie();
                }
            }
}

void Second::on_znakrowna_clicked()
{
    liczba= argument1.toLong();
    rozkladnaczynniki(liczba);
    long poprzednia=liczba-1;
    long nastepna=liczba+1;
    Fibonacci(liczba);
    konwersja(liczba);
    ui->ekran2->setText(QString("Liczba: "+QString::number(liczba)+"\n"
                                "Poprzednia liczba całkowita: "+QString::number(poprzednia)+"\n"
                                "Następna liczba całkowita: "+QString::number(nastepna)+"\n"
                                ""+rozklad+"\n"
                                ""+czypierwsza+"\n"
                                ""+fibo+"\n"
                                ""+silnia+"\n"
                                ""+system2+"\n"
                                ""+system8+"\n"
                                ""+system16+"\n"
                                ));
    argument1="";
    licznik=0;
    odblokowanie();
    ui->ekran->setText(QString(argument1));

}

void Second::sprsilnia(long liczba)
{
    silnia="Czy jest silnią: ";
    long var=1, licznik=1;
    bool dalej=true;
    while(dalej)
    {
        if (var==liczba)
        {
            dalej=false;
            silnia=silnia+"TAK";
        }
        if (var>liczba)
        {
            dalej=false;
            silnia=silnia+"NIE";
        }
        var=var*licznik;
        licznik++;
    }
}

void Second::Fibonacci(long liczba)
{
    fibo = "Liczba Fibonacciego: ";
    bool dalej=true;
    long kolejna=0, f0=0,f1=1;
    while(dalej)
    {
        if (kolejna==liczba)
        {
            dalej=false;
            fibo=fibo+"TAK";
        }
        if (kolejna>liczba)
        {
            dalej=false;
            fibo=fibo+"NIE";
        }
        kolejna=f0+f1;
        f0=f1;
        f1=kolejna;
    }
}

void Second::rozkladnaczynniki(long liczba)
{
    rozklad="Rozklad na czynniki pierwsze: ";
    if (liczba == 2)
    {
        czypierwsza="Liczba pierwsza: TAK";
    }
    else if (liczba == 1 || liczba == 0)
    {
        rozklad=rozklad+QString::number(liczba);
        czypierwsza="Liczba pierwsza: TAK";
    }
    else
    {
        long licznik=0;
            while( liczba % 2 == 0)
            {
                rozklad=rozklad+"2 ";
                licznik++;
                liczba=liczba/2;
            }

            for(int i = 3; i<=liczba;i=i+2)
            {
                while (liczba%i == 0)
                {
                    rozklad=rozklad+QString::number(i)+" ";
                    licznik++;
                    liczba=liczba/i;
                }
            }
            czypierwsza="Liczba pierwsza: NIE";

            if (licznik==1)
            {
                czypierwsza="Liczba pierwsza: TAK";
            }
    }
}
void Second::konwersja(long liczba)
{
    system2="";
    system8="";
    system16="";
    long cyfra2=liczba;
    long cyfra8=liczba;
    long cyfra16=liczba;
    if (liczba==0)
    {
    long cyfra=0;
    system2=system2+QString::number(cyfra);
    system8=system8+QString::number(cyfra);
    system16=system16+QString::number(cyfra);
    }
    else
    {
    while(cyfra2)
    {
    long cyfra=cyfra2%2;
    system2=QString::number(cyfra)+system2;
    cyfra2=cyfra2/2;
    }
    while(cyfra8)
    {
    long cyfra=cyfra8%8;
    system8=QString::number(cyfra)+system8;
    cyfra8=cyfra8/8;
    }
    while(cyfra16)
    {
    long cyfra=cyfra16%16;
    QString znak;
    if (cyfra<10)
    {
        znak=QString::number(cyfra);
    }
    else if (cyfra==10) {znak="A";}
    else if (cyfra==11) {znak="B";}
    else if (cyfra==12) {znak="C";}
    else if (cyfra==13) {znak="D";}
    else if (cyfra==14) {znak="E";}
    else if (cyfra==15) {znak="F";}
    system16=znak+system16;
    cyfra16=cyfra16/16;
    }
    }
    system2="Reprezentacja w systemie dwojkowym: "+system2;
    system8="Reprezentacja w systemie osemkowym: "+system8;
    system16="Reprezentacja w systemie szesnastkowym: "+system16;
}

void Second::on_znakczysz_clicked()
{
    ui->ekran2->setText(QString(""));
}
