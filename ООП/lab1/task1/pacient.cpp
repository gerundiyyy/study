#include "pacient.h"
#include <iostream>

using namespace std;
pacients::pacients(int Convalescents, int Sick, int Simulators)
{
	this->Convalescents = Convalescents;
	this->Sick = Sick;
	this->Simulators = Simulators;
	cout << "Объект создан!" << endl;
}
pacients::~pacients()
{
	cout << "Объект удалён!" << endl;
}
//Getters
int pacients::getConvalescents() const
{
	return Convalescents;
}
int pacients::getSick() const
{
	return Sick;
}
int pacients::getSimulators() const
{
	return Simulators;
}

//Setters
void pacients::setConvalescents(int Convalescents)
{
	this->Convalescents = Convalescents;
}
void pacients::setSick(int Sick)
{
	this->Sick = Sick;
}
void pacients::setSimulators(int Simulators)
{
	this->Simulators = Simulators;
}

void pacients::coutSetConvalescentsMessage() const
{
	cout << "Введите количество выздоровевших: ";
}
void pacients::coutSetSickMessage() const
{
	cout << "Введите количество больных: ";
}
void pacients::coutSetSimulatorsMessage() const
{
	cout << "Введите количество симулянтов: ";
}

//Special methods
void pacients::inputPacients()
{
	int Convalescents;
	int Sick;
	int Simulators;

	coutSetConvalescentsMessage();
	cin >> Convalescents;
	setConvalescents(Convalescents);

	coutSetSickMessage();
	cin >> Sick;
	setSick(Sick);

	coutSetSimulatorsMessage();
	cin >> Simulators;
	setSimulators(Simulators);
}
void pacients::outputPacients() const
{
	double total;
	double totalPecentConvalescents;
	double totalPecentSick;
	double totalPecentSimulators;

	total = getConvalescents() + getSick() + getSimulators();

	totalPecentConvalescents = getConvalescents() * 100 / total;
	totalPecentSick = getSick() * 100 / total;
	totalPecentSimulators = getSimulators() * 100 / total;

	cout << "Выздоровевших в больнице " << totalPecentConvalescents << "% от всех пациентов в больнице." << endl;
	cout << "Больных в больнице " << totalPecentSick << "% от всех пациентов в больнице." << endl;
	cout << "Симулянтов в больнице " << totalPecentSimulators << "% от всех пациентов в больнице." << endl;
}