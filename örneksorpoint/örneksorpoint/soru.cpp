#include <iostream>
using namespace std;

int main() {
	/* Temel pointer tanýmlama :
 a, b, ve c birer int tamsayi ve a = 10
 d ise bir tam sayi pointer'i ve a'nin adresini tutuyor: 0x7ffdef83147c
 *d ile a'nin degerine ulasiyoruz a = 10
 &a ile a'nin pointer adresine ulasiyoruz a = 0x7ffdef83147c
 &b ile b'nin pointer adresine ulasiyoruz : 0x7ffdef831478
 &c  ile c'nin pointer adresine ulasiyoruz : 0x7ffdef831474
 &d ile d'nin pointer adresine ulasiyoruz : 0x7ffdef831468
 CEVAP :*/
	/*
	int a = 10, b, c;
	int* p;
	p = &a;
	cout << endl << endl << p<<endl;
	cout << &a << endl;
	cout << *p << endl;
	cout << a << endl;
	cout << &b << endl;
	cout << &c << endl;
	*/
	/*Pointer kullanimi:
 ab = int pointer'i, int m = 17

 m'nin adresi : 0x7ffc8f3145a4
 m'nin degeri : 17

 m'nin adresi ab'ye atandý.
 ab'nin adresi : 0x7ffc8f3145a4
 ab'nin icerigi : 17

 m'ye 35 degeri atandi.
 ab'nin adresi : 0x7ffc8f3145a4
 ab'nin icerigi : 35

 ab'nin isaret ettigi degiskenin degeri 8 olarak atandi.
 m'nin adresi: 0x7ffc8f3145a4
 m'nin degeri : 8
 CEVAP : */
	/*
	int* p;
	int m = 15;
	p = &m;
	cout << endl << *p << endl;
	cout << m << endl;

	m = 35;
	cout << *p << endl;
	*p = 8;
	cout << m << endl;
	*/
	/* & (Adresi) ve * (adresteki deger) operatorunun kullanimi :
 m = 200
 fx = 200.600006
 cht = z

 & operator kullanimi :
-----------------------
 m'nin adresi= 0x7ffe069f1234
 fx'in adresi = 0x7ffe069f1230
 cht'nin adresi = 0x7ffe069f122f
 & ve * operator kullanimi :
-----------------------------
 m'nin adresindeki deger = 200
 fx'in adresindeki deger = 200.600006
 cht'nin adresindeki deger = z
 Sadece pointer kullanimi :
----------------------------------
 m'nin adresi = 0x7ffe069f1234
 fx'in adresi = 0x7ffe069f1230
 cht'nin adresi = 0x7ffe069f122f
 Sadece pointer operatorunun kullanimi :
----------------------------------
 m'nin adresindeki deger = 200
 fx'in adresindeki deger = 200.600006
 cht'nin adresindeki deger = z
 CEVAP : */
/* 
int m = 200;
	float fx = 200.600;
	char cht = 'z';
	int* p1;
	float* p2;
	char* p3;
	p1 = &m;
	p2 = &fx;
	p3 = &cht;
	cout << endl << p1 << endl << p2 << endl << p3 << endl;
	cout << endl << &m << endl << &fx << endl << &cht << endl;
	cout << endl << *p1 << endl << *p2 << endl << *p3 << endl;
	cout << endl << m << endl << fx << endl << cht << endl;
*/
	/* iki sayýnýn toplamýný pointer kullanara yapma
	CEVAP:  
	int x, y, sum;
	int* p, * p2;
	p = &x;
	p2 = &y;
	
	cout << "lutfen ilk sayiyi girinizz: " << x;
	cin >> x;
	cout << endl << "lutfen ikinci sayiyi girinizz: " << y;
	cin >> y;
cout << endl;

	sum = *p + *p2;
	cout << endl << endl << sum;
	*/
/* Pointer kullanarak iki sayýdan en büyüðünü bulan bir C program kodu yazýnýz.
Konsolda beklenen çýktý:
int x, y;
int* p = &x, * p2 = &y;
cout << endl << "lutfen ilk sayi giriniz:  ";
cin >> x;
cout << endl << "lutfen ikinci sayiyi giriniz:  ";
cin >> y;
if (*p > *p2) {
	cout << endl << *p;
}
else {
	cout << endl << *p2;
}
*/


	return 0;
}