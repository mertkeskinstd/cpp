
#include <iostream>
#include<stdlib.h>
using namespace std;

bool Asalsayimi(int sayi)
{
	int sayac = 0;
	for (int j = 2; j < sayi; j++)
	{
		if (sayi % j == 0)
		{
			sayac++;
			break;
		}
	}
	if (sayac == 0)
		return true;
	else
		return false;

}

int main()
{

	int sayi;
	cout << "Sayi : ";
	cin >> sayi;
	if (Asalsayimi(sayi))
	{
		cout << "Sayi Asal";
	}
	else
	{
		cout << "Sayi Asal Degil";
	}
}
