#include <iostream>
using namespace std;


//call by value
//sayinin atanmi� oldugu 5 degerini al�r ve fonksiyondaki deger parametresine koyar
//memory iki seyi akl�nda tutamaz buyuzden say�n�n deger� 10 olacag� yer�ne 5 olarak kal�r
//ama deger 10 olur cunku onun �c�ne atatd�k

//call by reference 
//bu ise call by val�enin bir nevi tersi gibidir & ve i�areti olan bu i�aret degerin yerine say�n�n atanm�� oldugu 5 degerini 
//degilde d�rek say�y� atam�s oldugu �c�n hem deger hem say� 10 olur bir nev� "ve" olarak dusuneb�l�r�z. 
void degistir(int& deger) {
	deger = deger * 2;
	cout << "deger :" << deger;
}

int main() {
	int sayi = 5;
	degistir(sayi);
	cout <<endl<< "sayi :" << sayi;

	return 0;
}