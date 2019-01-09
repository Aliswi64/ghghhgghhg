#include<iostream>
#include"pch.h"


using namespace std;

int ile;

int main()
{
	cout << "Ile liczb w tablicach";
	cin >> ile;

	int*tablica;
		tablica = new int[ile];
		for (int i = 0; i < ile; i++)
		{
			cout << (int) tablica << endl;
			tablica ++;
		}
		delete[]tablica;



	return 0;
}

