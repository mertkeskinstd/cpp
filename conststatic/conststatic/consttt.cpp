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

	const int pi = 3.14; // const de�i�keninin sabit olmas�n� sa�lar sonradan de�i�kene deger atasan bile de�i�tirmez ve compile etmez.
	//static ise say�lan bir degerin bellekte kalmas�n� saglar ve tekrar say�lmas� hal�nde o degeri kullan�r.
	fonksiyon1();
	fonksiyon1();
	fonksiyon1();
	fonksiyon2();
	fonksiyon2();
	fonksiyon1();
	



	return 0;
}