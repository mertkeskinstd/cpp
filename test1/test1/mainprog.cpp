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
   cout << "ay�e �aspak ����";
   */
   /*
   int index = 0;
										   // kosul durumu dogru oldugu surece parentez iindeki kod blo�u loop olarak cal�s�r;
   while (index <= 4) {
	   index = index + 1;
	   cout << index<<endl;


   }
   */
   //SORU---1 DEN KULLANICININ G�RD��� SAYIYA KADAR 6 NIN KATLARINI YAZDIRINIZ
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






	//1den 20 ye kadar ekrana yazd�r�lan for dongusu 
	/* 
	for (int i = 1; i >= -20; i--) {
		
		
			cout << i << endl;

	}
	*/


	// soru quiz
	//kullan�c�n� girdigi sayinin faktoriyelini hesalayan bir prog yaz�n
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
	//break d�g�y� sonland�r�r(d�ng� d���na ��k�l�r
	//continue: contiune alt�nda kalan k�s�m atlan�r ve tekrar ba�a d�n�l�r
	/* 
	for (int a = 1; a <= 20; a++) {
		if (a == 10)

			break;
			cout << a << endl;

	    
		
	}
	cout << endl;
	*/
	//kullan�c�n�n konsoldan girdi�i say�ya g�re a�a��daki �ekide c�kt� veren program yaz�n�z 
	//kutfen bir say� giriniz :4
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


