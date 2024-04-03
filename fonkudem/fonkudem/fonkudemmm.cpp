//DÝZÝLER KONUSUNA GÝRÝÞ ARRAYS 1. ders TEK BOYUT
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int arr[5];
	arr[0] = 20;
	arr[1] = 33;
	arr[2] = 65;
	arr[3] = 78;
	arr[4] = 98;
	int dizi[] = { 23,65,89 };
	cin >> arr[0];
	for (int index = 0; index <= 4; index++) {
		cout << arr[index] << endl;
	}

	return 0;
}