#include <iostream>
#include<stdlib.h>
using namespace std;

bool ciftmi(int sayi) {
	if (sayi % 2 == 0) {
		return true;
	}
	else {
		return false;
	}

}

int main()
{
	int sayi;
	int tekadet = 0, ciftadet = 0;
	for (int i = 1; i <= 10; i++)
	{
		cout << i<<"sayi :";
		cin >> sayi;
		if (ciftmi(sayi)) {
			ciftadet++;

		}
		else {
			tekadet++;
		}
	}
	cout << "girdiginiz tek sayilarin adedi :" <<tekadet<< endl;
	cout << "girdiginiz cift sayilarin adedi :" << ciftadet;
}

