#include <iostream>
using namespace std;
int ucaginyonbilgirenihesapla(int xtemp) {
	//yogun hesaplamalara en az 2000 sat�r
	xtemp = 34;
	return xtemp;
}
//bunun yerine bu
void ucaginyonbilgirenihesapla2(int* p) {
	*p = 78;
}

int main() {
	int x = 7;
	int* ptr;
	ptr = &x; //adress of variable yani x in adresini i�inde tutar yani x in adresi 0000009F5E3EFB24 bu ise pointer i�erisinde bunu tutar
	cout << x << endl;//�ok h�zl� i�lem yapmam�z� sa�lar direk ram uzer�nden i�lem yapab�l�r�z 
	cout << *ptr << endl<<endl;
	cout << ptr << endl;
	cout << &x<<endl;
	*ptr = 155;
	cout << x << endl;
//x=  ucaginyonbilgirenihesapla(x); //atama ve ya return etme yerine memory i yorm�yacca sek�lde po�nterlar �le tak hamlede kullanab�l�r�z.
	//memoryden ve cpu dan kazanc�m�z olur  
	ucaginyonbilgirenihesapla2(ptr);
	cout << "x in yeni degeri :" << *ptr << endl;

	cout << endl;
	return 0;
}