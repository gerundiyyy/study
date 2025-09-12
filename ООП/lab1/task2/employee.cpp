#include <iostream>
#include "employee.h"

using namespace std;
employeers::employeers(int Doctor, int Nurse, int MedicalOrderly)
{
	this->Doctor = Doctor;
	this->Nurse = Nurse;
	this->MedicalOrderly = MedicalOrderly;
	cout << "Объект создан!"<< endl;
}
employeers::~employeers()
{
	cout << "Объект удалён!"<< endl;
}
//Getters
int employeers::getDoctor() const
{
	return Doctor;
}
int employeers::getNurse() const
{
	return Nurse;
}
int employeers::getMedicalOrderly() const
{
	return MedicalOrderly;
}

//Setters
void employeers::setDoctor(int Doctor)
{
	this->Doctor = Doctor;
}
void employeers::setNurse(int Nurse)
{
	this->Nurse = Nurse;
}
void employeers::setMedicalOrderly(int MedicalOrderly)
{
	this->MedicalOrderly = MedicalOrderly;
}

void employeers::coutSetDoctorMessage() const
{
	cout << "Введите количество докторов: ";
}
void employeers::coutSetNurseMessage() const
{
	cout << "Введите количество медсестёр: ";
}
void employeers::coutSetMedicalOrderlyMessage() const
{
	cout << "Введите количество санитаров: ";
}

//Special methods
void employeers::inputEmployeers()
{
	int Doctor;
	int Nurse;
	int MedicalOrderly;

	coutSetDoctorMessage();
	cin >> Doctor;
	setDoctor(Doctor);

	coutSetNurseMessage();
	cin >> Nurse;
	setNurse(Nurse);

	coutSetMedicalOrderlyMessage();
	cin >> MedicalOrderly;
	setMedicalOrderly(MedicalOrderly);
}
void employeers::outputEmployeers() const
{
	double total;
	double totalPecentDoctor;
	double totalPecentNurse;
	double totalPecentMedicalOrderly;

	total = getDoctor() + getNurse() + getMedicalOrderly();

	totalPecentDoctor = getDoctor() * 100 / total;
	totalPecentNurse = getNurse() * 100 / total;
	totalPecentMedicalOrderly = getMedicalOrderly() * 100 / total;

	cout << "Докторов в больнице " << totalPecentDoctor << "% от всех сотрудников в больнице." << endl;
	cout << "Медсестёр в больнице " << totalPecentNurse << "% от всех сотрудников в больнице." << endl;
	cout << "Санитаров в больнице " << totalPecentMedicalOrderly << "% от всех сотрудников в больнице." << endl;
}