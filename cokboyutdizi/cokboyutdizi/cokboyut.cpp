#include <iostream>
#include <stdlib.h>
using namespace std;
void artibir(int arr[],int size) {
	 for (int i = 0; i < size; i++) {
		 arr[i]++;
	}

}
int main() {
	
	/*
	
	int arr[3][4] = { {25,36,34,45},{63,52,75,85},{28,98,74,62} };
	//cout<<arr[0][1]; belirtilen yerdeki tek sayýyý yazdýrýr
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << "    ";
		}
		cout << endl;

	}
	*/

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	artibir(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout<<arr[i]<<"     ";
	}

cout << endl;
	return 0;

}