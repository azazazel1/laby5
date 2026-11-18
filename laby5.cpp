// laby5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	//zad 1
	int tab[10];
	cout << "Wprowadz dziesiec liczb" << endl;
	cin >> tab[0] >> tab[1] >> tab[2] >> tab[3] >> tab[4] >> tab[5] >> tab[6] >> tab[7] >> tab[8] >> tab[9];
	cout << "Wprowadzone liczby to: " << tab[9] << " " << tab[8] << " " << tab[7] << " " << tab[6] << " " << tab[5] << " " << tab[4] << " " << tab[3] << " " << tab[2] << " " << tab[1] << " " << tab[0] << endl;
	//zad 2

	//zad 3
	int tablica[10];
	int suma = 0;
	cout << "Wylosowane liczby to: " << endl;
	for (int i = 0; i < 10; i++) {
		tablica[i] = rand() % 100 + 1;
		cout << tablica[i] << " ";
		suma += tablica[i];
	}

	double srednia = suma / 10.0;
	int mniejszeodsredniej = 0;
	for (int i = 0; i < 10; i++) {
		if (tablica[i] < srednia) {
			mniejszeodsredniej++;
		}
		}
	cout << endl << "Srednia wynosi: " << srednia << endl;
	cout << "Liczb mniejszych od sredniej jest: " << mniejszeodsredniej << endl;

	int min = tablica[0];
	int max = tablica[0];

	for (int i = 1; i < 10; i++) {
		if (tablica[i] < min) {
			min = tablica[i];
		}
		if (tablica[i] > max) {
			max = tablica[i];
		}
	}
	cout << "Najmniejsza liczba to: " << min <<" Najwieksza liczba: " << max << endl;
	//zad 4
	double tablica2[10] = { 0 };
	int n;
	cout << "Wprowadz liczbe elementow tablicy: ";
	cin >> n;

	if (n > 10 || n < 0) {
		cout << "za malo albo za duzo elementow" << endl;
		return 0;
	}


	if (n > 0) {
		cout << "podaj " << n << " liczb:" << endl;
		for (int i = 0; i < n; i++) {
			int b;
			cin >> b;
			tablica2[i] = b;
		}
	}
	
	double suma2 = tablica2[0];
	double minval = tablica2[0];
	double maxval = tablica2[0];

	for (int i = 1; i < 10; i++) {
		suma2 += tablica2[i];
		if (tablica2[i] < minval) {
			minval = tablica2[i];
		}
		if (tablica2[i] > maxval) {
			maxval = tablica2[i];
		}
	}

	double srednia2 = suma2 / 10.0;

	cout << "Zawartosc tablicy: ";
	for (int i = 0; i < 10; i++) {
		cout << tablica2[i] << " ";
	}
	cout << endl;

	cout << "Wartosc srednia: " << srednia2 << endl;
	cout << "Wartosc maksymalna: " << maxval << endl;
	cout << "Wartosc minimalna: " << minval << endl;

	//zad 5
	int tablica3[10];
	for (int i = 0; i < 10; i++) {
		tablica[i] = rand() % 10 + 1;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
