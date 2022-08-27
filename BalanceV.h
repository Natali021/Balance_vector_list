#pragma once
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class BalanceV
{
private:
	vector<double> Pozitiv;
	vector<double> Negativ;

public:

	/**
	*�����������
	*/
	BalanceV(){
	
	}

	/**
	*dtor
	*/
	~BalanceV(){
		Pozitiv.clear();
		Negativ.clear();
	}

	/**
	*get
	*/
	vector<double> GetPozitiv() {
		return this->Pozitiv;
	}

	vector<double> GetNegativ() {
		return this->Negativ;
	}

	/**
	*����� �������
	*/
	double SumPozitiv();

	/**
	*����� ��������
	*/
	double	SumNegativ();

	/**
	*������ �������
	*/
	double	ResBalance();

	/**
	*set
	*/
	int setPozitiv();



	int setNegativ();

	/**
	*������� �� �����
	*/
	void showPozitiv();

	void showNegativ();
		

		
};

