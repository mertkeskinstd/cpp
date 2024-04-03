#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
/*
20-40 arasýndaki tam sayýlarýn bölenlerini bulup ekrana yazdýran birc++ programý yazýnýz
örn-20nin bölenleri=1,2,4,5,10,20
*/

int main() {
	
	for (int i = 20; i <=40; i++){
		cout << i << "  bolenleri =";

		for (int a = 1; a <=i; a++){
			if (i % a == 0) {
				cout << a << ",   ";
			}
			

		}
		cout << endl; 

	}



	return 0;
}