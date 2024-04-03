#include <iostream>
using namespace std;
int ucaginyonbilgirenihesapla(int xtemp) {
	//yogun hesaplamalara en az 2000 satýr
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
	ptr = &x; //adress of variable yani x in adresini içinde tutar yani x in adresi 0000009F5E3EFB24 bu ise pointer içerisinde bunu tutar
	cout << x << endl;//çok hýzlý iþlem yapmamýzý saðlar direk ram uzerýnden iþlem yapabýlýrýz 
	cout << *ptr << endl<<endl;
	cout << ptr << endl;
	cout << &x<<endl;
	*ptr = 155;
	cout << x << endl;
//x=  ucaginyonbilgirenihesapla(x); //atama ve ya return etme yerine memory i yormýyacca sekýlde poýnterlar ýle tak hamlede kullanabýlýrýz.
	//memoryden ve cpu dan kazancýmýz olur  
	ucaginyonbilgirenihesapla2(ptr);
	cout << "x in yeni degeri :" << *ptr << endl;

	cout << endl;
	return 0;
}