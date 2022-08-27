#include "BalanceV.h"
#include <iostream>
#include <vector>
using namespace std;

/**
	*сумма доходов
	*/
double BalanceV:: SumPozitiv() {
	double sum_of_elems = 0;
	sum_of_elems = accumulate(Pozitiv.begin(), Pozitiv.end(), 0.0);
	return sum_of_elems;
}

/**
*сумма расходов
*/
double BalanceV::	SumNegativ() {
	double sum_of_elems = 0;
	sum_of_elems = accumulate(Negativ.begin(), Negativ.end(), 0.0);
	return sum_of_elems;
}

/**
*расчет баланса
*/
double BalanceV::ResBalance() {
	double Balance = 0;
	Balance = this->SumPozitiv() + this->SumNegativ();
	return Balance;
}

/**
*set
*/
int BalanceV::setPozitiv() {
	double digit = 0;

	cout << "\nВВодим данные прихода (только положительные числа).";
	cout << "\n\tДля прекращения ввода нажмите 0\n\n";
	do {
		cin >> digit;
		if (digit < 0) {
			cout << "\nОшибка!!! Введена некорректная информация\n";
			return 0;
		}
		else {
			if (digit == 0) {
			}
			else {
				Pozitiv.push_back(digit);
			}
		}
	} while (digit != 0); //Выход из программы	
	return 1;
}



int BalanceV::setNegativ() {
	double digit = 0;
	cout << "\nВВодим данные расхода (только отрицательные числа).";
	cout << "\n\tДля прекращения ввода нажмите 0\n\n";
	do {
		cin >> digit;
		if (digit > 0) {
			cout << "\nОшибка!!! Введена некорректная информация\n";
			return 0;
		}
		else {
			if (digit == 0) {
			}
			else {
				if ((digit * -1) > this->ResBalance()) {
					cout << "\nОшибка!!! Недостаточная сумма баланса для списания\n";
					return 0;
				}
				else {
					Negativ.push_back(digit);

				}
			}
		}

	} while (digit != 0); //Выход из программы
	return 1;
}

/**
*выводим на экран
*/
void BalanceV::showPozitiv() {
	for (vector<double>::iterator it = Pozitiv.begin(); it != Pozitiv.end(); ++it)
		cout << *it << "  |  ";
}

void BalanceV::showNegativ() {
	for (vector<double>::iterator it = Negativ.begin(); it != Negativ.end(); ++it)
		cout << *it << "  |  ";
}


