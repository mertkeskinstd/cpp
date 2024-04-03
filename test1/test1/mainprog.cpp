#include<iostream>
using namespace std;

int main()
{
	/*
	int x = 5, y = 9, z = 7.4, w;
	w = (z > x) - (y <= 11);
	cout << w;
	*/
	/*
	int x = 5, y = 9, z = 7.4, w;
	w =z > x - y <= 11;
	cout << w;
	*/
	/*
   setlocale(LC_ALL, "Turkish");
   cout << "ayþe ðaspak ðððð";
   */
   /*
   int index = 0;
										   // kosul durumu dogru oldugu surece parentez iindeki kod bloðu loop olarak calýsýr;
   while (index <= 4) {
	   index = index + 1;
	   cout << index<<endl;


   }
   */
   //SORU---1 DEN KULLANICININ GÝRDÝÐÝ SAYIYA KADAR 6 NIN KATLARINI YAZDIRINIZ
   /*
   int kat, gir;
   kat = 1;
   cout << "lutfen bir sayi degeri giriniz :";
   cin >> gir;
   while (kat <= gir) {
	   if ((kat % 6) == 0) {
		   cout << kat << endl;
	   }

	   kat++;
   }
   cout << endl;

  
	string sifre = "1234";
	string girilen;
	do {
		cout << "lutfen sifreyi giriniz :";
		cin >> girilen;
	} while (sifre != girilen);
	cout << "hosgeldn";
	cout << endl;
	*/






	//1den 20 ye kadar ekrana yazdýrýlan for dongusu 
	/* 
	for (int i = 1; i >= -20; i--) {
		
		
			cout << i << endl;

	}
	*/


	// soru quiz
	//kullanýcýný girdigi sayinin faktoriyelini hesalayan bir prog yazýn
	/* 
	int sayi;
	cout << "lutfen sayi giriniz" << endl;
	cin >> sayi;
	int sonuc = 1;

	for (int a = 1; a <= sayi; a++) {
		sonuc = sonuc * a;


	}
	cout << "sonuc :" << sonuc;
	*/
	//break dögüyü sonlandýrýr(döngü dýþýna çýkýlýr
	//continue: contiune altýnda kalan kýsým atlanýr ve tekrar baþa dönülür
	/* 
	for (int a = 1; a <= 20; a++) {
		if (a == 10)

			break;
			cout << a << endl;

	    
		
	}
	cout << endl;
	*/
	//kullanýcýnýn konsoldan girdiði sayýya göre aþaðýdaki þekide cýktý veren program yazýnýz 
	//kutfen bir sayý giriniz :4
	//1
	//2 2
	//3 3 3
//4 4 4 4
/* 
int sayi;
cout << "lutfen bir sayi giriniz :";
cin >> sayi;
cout << endl;
for (int j = 1; j <= sayi; j++) {
	for (int i = 1; i <= j; i++) {
		cout << j << "    ";

	}
	cout << endl;
}
cout << endl;
*/



	return 0;
}


