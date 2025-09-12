#pragma once
class pacients
{
private:
	int Convalescents;
	int Sick;
	int Simulators;
public:
	pacients(int Convalescents, int Sick, int Simulators);
	~pacients();

	int getConvalescents()const;
	int getSick()const;
	int getSimulators()const;

	void setConvalescents(int Convalescents);
	void setSick(int Sick);
	void setSimulators(int Simulators);

	void coutSetConvalescentsMessage()const;
	void coutSetSickMessage()const;
	void coutSetSimulatorsMessage()const;

	void inputPacients();
	void outputPacients()const;
};

