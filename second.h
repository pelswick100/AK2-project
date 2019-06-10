#ifndef SECOND_H
#define SECOND_H

#include <QMainWindow>

namespace Ui {
class Second;
}

class Second : public QMainWindow
{
    Q_OBJECT

public:
    explicit Second(QWidget *parent = nullptr);
    ~Second();

private slots:
    void zablokowanie();

    void odblokowanie();

    void on_znak1_clicked();

    void on_znak2_clicked();

    void on_znak3_clicked();

    void on_znak4_clicked();

    void on_znak5_clicked();

    void on_znak6_clicked();

    void on_znak7_clicked();

    void on_znak8_clicked();

    void on_znak9_clicked();

    void on_znak0_clicked();

    void on_znakclear_clicked();

    void on_znakbksp_clicked();

    void on_znakrowna_clicked();

    void on_znakczysz_clicked();

    void rozkladnaczynniki(long liczba);

    void Fibonacci(long liczba);

    void sprsilnia(long liczba);

    void konwersja(long liczba);
private:
    Ui::Second *ui;
    QString argument1;
    int licznik;
    long liczba;
    QString rozklad;
    QString czypierwsza;
    QString fibo;
    QString silnia;
    QString system2;
    QString system8;
    QString system16;
};

#endif // SECOND_H
