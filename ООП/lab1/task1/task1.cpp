#include <iostream>
#include "pacient.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    pacients* Hospital = new pacients(0, 0, 0);

    Hospital->inputPacients();
    Hospital->outputPacients();

    delete Hospital;
}