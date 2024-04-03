#include <iostream>
using namespace std;
void fonksiyon1() {
	static int sayac=0;
	sayac++;
	cout << "fonksiyon1 sayac :" << sayac << endl;
}
void fonksiyon2() {
	static int sayac = 0;
	sayac++;
	cout << "fonksiyon2 sayac :" << sayac << endl;
}


int main() {

	const int pi = 3.14; // const deðiþkeninin sabit olmasýný saðlar sonradan deðiþkene deger atasan bile deðiþtirmez ve compile etmez.
	//static ise sayýlan bir degerin bellekte kalmasýný saglar ve tekrar sayýlmasý halýnde o degeri kullanýr.
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon2();
	fonksiyon2();
	fonksiyon1();
	



	return 0;
}