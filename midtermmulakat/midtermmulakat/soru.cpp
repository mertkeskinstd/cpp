#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
/*
4 basamakl� ve rakamlar� birbirinden farkl� ka� tane tam say� oldu�unu bulan ve ekrana yazd�ran c++ program� yaz�n�z.
�rn-1023 rakamlar� birbirinden farkl� 
*/

int main() {
	int sayac = 0;
	int birb, onlarb, yuzlerb, binlerb;
	for (int i = 1000; i <= 9999; i++){
		birb = i % 10;
		onlarb = ((i % 100) - (birb)) / 10;
		yuzlerb = ((i / 100) % 10);
		binlerb = i / 1000;
		if (birb != yuzlerb &&  onlarb != birb && birb!=binlerb && onlarb!=yuzlerb && onlarb!=binlerb && yuzlerb!=binlerb ) {
			sayac++;
			//cout << i << ",   "<<endl;
		}

	}
	cout <<"kac sayi var :"<< sayac;



	return 0;
}