#include <iostream>
using namespace std;
//program�n crash olmamas� amac�yla try catch baz� kod i�lemlerinden kullan�l�r dosya bulma vs.
//burada eger try catch kullanmasayd�k boleni s�f�r yapt�g�m�z zaman crashlencekti program once oluyor mu d�ye dener 
//sonra ona gore yakalar;
int main() {
	int bolen, bolunen;
	cout << "lutfen bolunen sayiyi giriniz :";
	cin >> bolunen;
	cout << endl << "lutfen bolen sayiyi giriniz :";
	cin >> bolen;
	int sonuc;
	try{
		if (bolen == 0) {
			throw 98;  //deger atama f�rlatmak demek;
			sonuc = bolunen / bolen;
			cout << "sonuc :" << sonuc;
	}
	}
	catch (int hatakodu) {
		cout << "lutfen boleni zero girmeyiniz !!!" << endl;
	}



	return 0;
}