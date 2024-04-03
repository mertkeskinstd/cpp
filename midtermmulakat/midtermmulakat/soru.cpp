#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
/*
4 basamaklý ve rakamlarý birbirinden farklý kaç tane tam sayý olduðunu bulan ve ekrana yazdýran c++ programý yazýnýz.
örn-1023 rakamlarý birbirinden farklý 
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