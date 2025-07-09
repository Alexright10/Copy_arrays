
#include "Header.h"




 int* Mass :: copypast(int* d, int b)
{
	int N; 
	N = b;
	masscopy = new int[N];
	for (int i = 0; i < N; ++i)
		masscopy[i] = d[i];
	cout << endl;

	return masscopy;
}
double* Mass :: copypast(double* d, int b)
{
	int range;
	range = b;
	masscopyd = new double[range];
	for (int i = 0; i < range; ++i)
		masscopyd[i] = d[i];
	/*	for (int i = 0; i < N; ++i)
			cout << masscopy[i] << " ";*/
	return masscopyd;
}
char* Mass :: copypast(char* d, int b)
{
	int range;
	range = b;

	masscopych = new char[range];
	cout << endl;
	for (int i = 0; i < range; ++i)
		masscopych[i] = d[i];
	/*	for (int i = 0; i < N; ++i)
			cout << masscopy[i] << " ";*/
	return masscopych;

}

void Mass :: get(int* d, int b)
{
	int n;
	n = b;
	for (int i = 0; i < n; ++i)
		cout << masscopy[i] << " ";
	cout << endl;

}
void Mass :: get(double* c, int t)
{
	int n;
	n = t;
	for (int i = 0; i < n; ++i)
		cout << masscopyd[i] << " ";

}
void Mass :: get(char* s, int p)
{
	int n;
	n = p;
	for (int i = 0; i < n; ++i)
		cout << masscopych[i] << " ";

}