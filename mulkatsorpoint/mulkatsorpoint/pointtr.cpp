#include <iostream>
using namespace std;
//mulakat sorusu a�ag�dak� kodun c�kt�s� ne olur ?
int main() {
	int a[5], * p, z;
	for (int i = 0; i < 5; i++) {
		a[i] = i * i;
	}
		p = a;
		z = *(p + 1) + *(a + 2);//1+4=5
		// a bir arraydir arraylerde pointer gibi i�erisinde adres tutar bu yuzden
		//2 eklersen 3. eleman� s�ze goster�r
		// 3. elemanda 4 e e�ittir 2.elemanda 1 olduguna gore c�kt�s� 5 olur .
		cout << z;
	



	return 0;
}