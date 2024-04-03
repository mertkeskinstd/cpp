#include <iostream>
using namespace std;


//call by value
//sayinin atanmiş oldugu 5 degerini alır ve fonksiyondaki deger parametresine koyar
//memory iki seyi aklında tutamaz buyuzden sayının degerı 10 olacagı yerıne 5 olarak kalır
//ama deger 10 olur cunku onun ıcıne atatdık

//call by reference 
//bu ise call by valıenin bir nevi tersi gibidir & ve işareti olan bu işaret degerin yerine sayının atanmış oldugu 5 degerini 
//degilde dırek sayıyı atamıs oldugu ıcın hem deger hem sayı 10 olur bir nevı "ve" olarak dusunebılırız. 
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