#include <iostream>               // int double char 
#include "Header.h"

using namespace std;



void main()
{
	setlocale(LC_ALL, "RUS");
	// �����-�� ������ �����
	// ����� ������� ����� � ���������� ��������� �� ���
	int mass[] = { 1,2,3,4,5 };

	double massd[] = { 1.2,2.4,3.5,4.6,5.7,8.9,9.1 };

	char massch[] = {'a', 'b', 'c', 'd', 'h','g','9'};
	
	Mass obj;
	int *pmi = obj.copypast(mass, sizeof(mass) / 4);
	cout << "����� ����� :" << pmi <<  endl;
	cout << "����� ������� :" << &mass << endl;
	obj.get(pmi, sizeof(mass) / 4);

	double* pmd = obj.copypast(massd, sizeof(massd) / 8);
	cout << "����� ����� :" << pmd <<  endl;
	cout << "����� ������� :" << &massd << endl;
	obj.get(pmd, sizeof(massd) / 8);
	
	char* pm = obj.copypast(massch, sizeof(massch));
	cout << "����� ����� :" << &pm << endl;
	cout << "����� ������� :" << &massch << endl;
	obj.get(pm, sizeof(massch));
}
