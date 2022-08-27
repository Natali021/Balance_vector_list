#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct info {
	double val;
	string inf;
};

class BalanceL
{
private:
	list<info> Pozitiv;
	list<info> Negativ;
	

public:

	/**
	*конструктор
	*/
	BalanceL() {

	}

	/**
	*dtor
	*/
	~BalanceL() {
		Pozitiv.clear();
		Negativ.clear();
	}

	/**
	*get
	*/
	list<info> GetPozitivL() {
		return this->Pozitiv;
	}

	list<info> GetNegativL() {
		return this->Negativ;
	}

	/**
	*сумма доходов
	*/
	double SumPozitivL();

	/**
	*сумма расходов
	*/
	double	SumNegativL();

	/**
	*расчет баланса
	*/
	double	ResBalanceL();

	/**
	*set
	*/
	int setPozitivL();

	int setNegativL();

	/**
	*выводим на экран
	*/
	void showPozitivL();

	void showNegativL();

};

