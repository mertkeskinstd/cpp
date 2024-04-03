#include <iostream>
using namespace std;
//  pointerlar�n genel kullan�m� bu �ekilde oolup kendime yer ay�rtt�r�yorum memoryde farketmeyen bir yeri pointer i�in sistem tutar 
//oraya h�c b�r sek�lde sistem taraf�ndan mudahale ed�lemez
//eger i�ler bittikten sonra delete etmezsen ve data gelmeye devam ederse 
//memory surekl� �cer�s�nde tutar ve belli bir raddeye geld�kten sorada crash olur program coker.
int main() {
/* 
	int* p = new int;
	*p = 7;
	cout << p << endl;
	cout << *p << endl;
	delete p;
	cout << p << endl;
	*/


	//eger bu xdeg�skenini normal bir arr tan�mlay�p �cer�s�ne yazsayd�n program cal�smazd� ama po�nter sayes�nde cal�s�yor sebeb� �se
	//po�nter zaten �cer�s�nde adres tuttugu �c�n b�ze rezerve ed�len yerlerden �lk yer�n adresinde haf�zs�nda buda kullan�c� kac 
	//g�rerse g�rs�n bellekte o kadar yer ayr�l�yor ve tutuluyor i� bittikten sonra delete diyip tum tutulan yerler� memory �cer�s�nden
	//s�lmek gerek�yor 
	int x;
	cout << "lutfen bir sayi giriniz:  ";
	cin >> x;
	int* p = new int[x];
	for (int i = 0; i < x; i++){
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < x; i++){
		sum = sum + p[i];
	}
	cout << "toplam:  " << sum<<endl<<endl<<endl;
	cout << p+2;
	cout << endl<<endl;
	delete[] p;
	return 0;
}