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
	*�����������
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
	*����� �������
	*/
	double SumPozitivL();

	/**
	*����� ��������
	*/
	double	SumNegativL();

	/**
	*������ �������
	*/
	double	ResBalanceL();

	/**
	*set
	*/
	int setPozitivL();

	int setNegativL();

	/**
	*������� �� �����
	*/
	void showPozitivL();

	void showNegativL();

};

