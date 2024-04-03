#include <iostream>
using namespace std;
//programýn crash olmamasý amacýyla try catch bazý kod iþlemlerinden kullanýlýr dosya bulma vs.
//burada eger try catch kullanmasaydýk boleni sýfýr yaptýgýmýz zaman crashlencekti program once oluyor mu dýye dener 
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
			throw 98;  //deger atama fýrlatmak demek;
			sonuc = bolunen / bolen;
			cout << "sonuc :" << sonuc;
	}
	}
	catch (int hatakodu) {
		cout << "lutfen boleni zero girmeyiniz !!!" << endl;
	}



	return 0;
}