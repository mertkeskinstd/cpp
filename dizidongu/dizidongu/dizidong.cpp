#include <iostream>
#include<stdlib.h>
using namespace std;
// kullan�can 4 adet say� al�p bu say�lar� sondan ba�a do�ru yazd�r�n
//1 2 3 4 like this 4 3 2 1 

int main() {
	
	int arr[4];
	cout << "lutfen sayilari giriniz :" << endl;
	
	for (int i = 0; i < 4; i++)
	{
		//cout << i << ". Sayi :";
		cin >> arr[i];
		
	}
	for (int  i = 3; i >=0; i--)
	{
		cout << arr[i]<<"   ";
	}



	return 0;
}