#include <iostream>
#include <string.h>
using namespace std;
#define N 20
short dlugosc;
char napis[N + 1];
int i;
int k;
int main()
{
	cout << "Wpisz ile ma byc wyrazow: " << endl;
	cin >> k;
	for (int j = 0; j = k; j++)
	{
		cout << "Wpisz wyraz " << endl;
		cin >> napis;
		dlugosc = strlen(napis);
		for (i = dlugosc - 1; i >= 0; i--) cout << napis[i] << endl;
		cout << dlugosc << endl;
	}
	cout << "Kacper Kazmierczak numer 9" << endl;
	system("pause");
	return 0;
}