#pragma once
class employeers
{
private:
	int Doctor;
	int Nurse;
	int MedicalOrderly;
public:
	employeers(int Doctor, int Nurse, int MedicalOrderly);
	~employeers();

	int getDoctor()const;
	int getNurse()const;
	int getMedicalOrderly()const;

	void setDoctor(int Doctor);
	void setNurse(int Nurse);
	void setMedicalOrderly(int MedicalOrderly);

	void coutSetDoctorMessage()const;
	void coutSetNurseMessage()const;
	void coutSetMedicalOrderlyMessage()const;

	void inputEmployeers();
	void outputEmployeers()const;
};

