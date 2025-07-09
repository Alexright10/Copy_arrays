#include <iostream>               // int double char 
#include "Header.h"

using namespace std;



void main()
{
	setlocale(LC_ALL, "RUS");
	// какой-то массив задан
	// нужно сделать копию и возвратить указатель на нее
	int mass[] = { 1,2,3,4,5 };

	double massd[] = { 1.2,2.4,3.5,4.6,5.7,8.9,9.1 };

	char massch[] = {'a', 'b', 'c', 'd', 'h','g','9'};
	
	Mass obj;
	int *pmi = obj.copypast(mass, sizeof(mass) / 4);
	cout << "адрес копии :" << pmi <<  endl;
	cout << "адрес массива :" << &mass << endl;
	obj.get(pmi, sizeof(mass) / 4);

	double* pmd = obj.copypast(massd, sizeof(massd) / 8);
	cout << "адрес копии :" << pmd <<  endl;
	cout << "адрес массива :" << &massd << endl;
	obj.get(pmd, sizeof(massd) / 8);
	
	char* pm = obj.copypast(massch, sizeof(massch));
	cout << "адрес копии :" << &pm << endl;
	cout << "адрес массива :" << &massch << endl;
	obj.get(pm, sizeof(massch));
}
