#include <iostream>
#include <stdlib.h>
using namespace std;

bool tekcift(int a) {
	if (a % 2 == 0) {
		return true;
	
	}
	else {
		return false;
	}

}



int main() {
	int sayi;
	int sonuc ;
	cout << "lutfen bir sayi giriniz :";
		cin >> sayi;
		sonuc=tekcift(sayi);
		if (sonuc == 0) {
			cout << "sayiniz tek" << endl;
		}
		else {
			cout << "sayiniz cift";
		}




	return 0;
}