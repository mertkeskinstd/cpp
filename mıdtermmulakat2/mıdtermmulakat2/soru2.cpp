#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
/*
20-40 aras�ndaki tam say�lar�n b�lenlerini bulup ekrana yazd�ran birc++ program� yaz�n�z
�rn-20nin b�lenleri=1,2,4,5,10,20
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