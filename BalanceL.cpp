#include "BalanceL.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

/**
*сумма доходов
*/
double BalanceL::SumPozitivL() {
	double sum_of_elems = 0;
	int size = Pozitiv.size();


	list<info>::iterator It = Pozitiv.begin();  //стаем на начало списка
	for (int i = 0; i < size; i++) {
		advance(It, i);       //шагаем
		double n = It->val;
		sum_of_elems += n;

	}


	return sum_of_elems;
}

/**
*сумма расходов
*/
double BalanceL::SumNegativL() {
	double sum_of_elems = 0;
	int size = Negativ.size();


	list<info>::iterator It = Negativ.begin();  //стаем на начало списка
	for (int i = 0; i < size; i++) {
		advance(It, i);       //шагаем
		double n = It->val;
		sum_of_elems += n;

	}
	return sum_of_elems;
}

/**
*расчет баланса
*/
double BalanceL::ResBalanceL() {
	double Balance = 0;
	Balance = this->SumPozitivL() + this->SumNegativL();
	return Balance;
}

/**
*set
*/
int BalanceL::setPozitivL() {
	
	info tmp;

	cout << "\nВВодим данные прихода (только положительные числа).";
	cout << "\n\tДля прекращения ввода нажмите 0\n\n";
	do {
		cout << "\n\tВведите значение\n\n";
		cin >> tmp.val;
		cout << "\n\tВведите описание\n\n";
		cin.ignore();
		getline(cin, tmp.inf);		
		
		if (tmp.val < 0) {
			cout << "\nОшибка!!! Введена некорректная информация\n";
			return 0;
		}
		else {
			if (tmp.val == 0) {
			}
			else {				
				Pozitiv.push_back(tmp);
			}
		}
	} while (tmp.val != 0); //Выход из программы	
	return 1;
}



int BalanceL::setNegativL() {
	info tmp;
	cout << "\nВВодим данные расхода (только отрицательные числа).";
	cout << "\n\tДля прекращения ввода нажмите 0\n\n";
	do {
		cout << "\n\tВведите значение\n\n";
		cin >> tmp.val;
		cout << "\n\tВведите описание\n\n";
		cin.ignore();
		getline(cin, tmp.inf);

		if (tmp.val > 0) {
			cout << "\nОшибка!!! Введена некорректная информация\n";
			return 0;
		}
		else {
			if (tmp.val == 0) {
			}
			else {
				if ((tmp.val * -1) > this->ResBalanceL()) {
					cout << "\nОшибка!!! Недостаточная сумма баланса для списания\n";
					return 0;
				}
				else {
					Negativ.push_back(tmp);

				}
			}
		}

	} while (tmp.val != 0); //Выход из программы
	return 1;
}

/**
*выводим на экран
*/
void BalanceL::showPozitivL() {
	for (auto it = Pozitiv.begin(); it != Pozitiv.end(); ++it)
	{
		cout << it->val<<"|"<<it->inf << "\n";
				
	}
	cout << endl;

}

void BalanceL::showNegativL() {
	for (auto it = Negativ.begin(); it != Negativ.end(); ++it)
	{
		cout << it->val << "|" << it->inf << "\n";

	}
	cout << endl;
}

