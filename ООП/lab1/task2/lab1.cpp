#include <iostream>
#include "employee.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    employeers* Hospital = new employeers(0, 0, 0);

    Hospital->inputEmployeers();
    Hospital->outputEmployeers();

    delete Hospital;
}