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
	*конструктор
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
	*сумма доходов
	*/
	double SumPozitiv();

	/**
	*сумма расходов
	*/
	double	SumNegativ();

	/**
	*расчет баланса
	*/
	double	ResBalance();

	/**
	*set
	*/
	int setPozitiv();



	int setNegativ();

	/**
	*выводим на экран
	*/
	void showPozitiv();

	void showNegativ();
		

		
};

