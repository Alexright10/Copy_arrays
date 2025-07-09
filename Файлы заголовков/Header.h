#pragma once
#include <iostream>

using namespace std;


class Mass
{
	int* masscopy = 0;
	double* masscopyd = 0;
	char* masscopych = 0;


public:                 методы :
						// получение доступа к исходному массиву в методах с помощью указателей 
						//  метод копирования который возвращает указатель на копию
	Mass()
	{}

	int* copypast(int* d, int b);
	

	double* copypast(double* d, int b);
	

	char* copypast(char* d, int b);
	

	void get(int* d, int b);
	
	void get(double* c, int t);
	
	void get(char* s, int p);
	


};
