#include "BalanceL.h"
#include <iostream>
#include <string>
#include <list>

using namespace std;

/**
*����� �������
*/
double BalanceL::SumPozitivL() {
	double sum_of_elems = 0;
	int size = Pozitiv.size();


	list<info>::iterator It = Pozitiv.begin();  //����� �� ������ ������
	for (int i = 0; i < size; i++) {
		advance(It, i);       //������
		double n = It->val;
		sum_of_elems += n;

	}


	return sum_of_elems;
}

/**
*����� ��������
*/
double BalanceL::SumNegativL() {
	double sum_of_elems = 0;
	int size = Negativ.size();


	list<info>::iterator It = Negativ.begin();  //����� �� ������ ������
	for (int i = 0; i < size; i++) {
		advance(It, i);       //������
		double n = It->val;
		sum_of_elems += n;

	}
	return sum_of_elems;
}

/**
*������ �������
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

	cout << "\n������ ������ ������� (������ ������������� �����).";
	cout << "\n\t��� ����������� ����� ������� 0\n\n";
	do {
		cout << "\n\t������� ��������\n\n";
		cin >> tmp.val;
		cout << "\n\t������� ��������\n\n";
		cin.ignore();
		getline(cin, tmp.inf);		
		
		if (tmp.val < 0) {
			cout << "\n������!!! ������� ������������ ����������\n";
			return 0;
		}
		else {
			if (tmp.val == 0) {
			}
			else {				
				Pozitiv.push_back(tmp);
			}
		}
	} while (tmp.val != 0); //����� �� ���������	
	return 1;
}



int BalanceL::setNegativL() {
	info tmp;
	cout << "\n������ ������ ������� (������ ������������� �����).";
	cout << "\n\t��� ����������� ����� ������� 0\n\n";
	do {
		cout << "\n\t������� ��������\n\n";
		cin >> tmp.val;
		cout << "\n\t������� ��������\n\n";
		cin.ignore();
		getline(cin, tmp.inf);

		if (tmp.val > 0) {
			cout << "\n������!!! ������� ������������ ����������\n";
			return 0;
		}
		else {
			if (tmp.val == 0) {
			}
			else {
				if ((tmp.val * -1) > this->ResBalanceL()) {
					cout << "\n������!!! ������������� ����� ������� ��� ��������\n";
					return 0;
				}
				else {
					Negativ.push_back(tmp);

				}
			}
		}

	} while (tmp.val != 0); //����� �� ���������
	return 1;
}

/**
*������� �� �����
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

