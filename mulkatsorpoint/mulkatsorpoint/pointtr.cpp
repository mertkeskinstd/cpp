#include <iostream>
using namespace std;
//mulakat sorusu aþagýdaký kodun cýktýsý ne olur ?
int main() {
	int a[5], * p, z;
	for (int i = 0; i < 5; i++) {
		a[i] = i * i;
	}
		p = a;
		z = *(p + 1) + *(a + 2);//1+4=5
		// a bir arraydir arraylerde pointer gibi içerisinde adres tutar bu yuzden
		//2 eklersen 3. elemaný sýze gosterýr
		// 3. elemanda 4 e eþittir 2.elemanda 1 olduguna gore cýktýsý 5 olur .
		cout << z;
	



	return 0;
}