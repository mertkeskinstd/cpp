#include <iostream>
#include <stdlib.h>
#include <chrono>
using namespace std;
int main() {
	int x;
	cout << "lutfen sayi giriniz :";
	cin >> x;
	chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
	for (int i =1 ; i <= x; i++) {
		int sayac = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0) {
				sayac++;
				//if (sayac>2)
				//{
				//	break;
				//}
			}
		}
		if (sayac == 2) {
			cout << i << ",  ";
		}

	}
	chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
	std::cout << "time difference=" << chrono::duration_cast<std::chrono::microseconds>(end - begin).count() 
		<< "msn" << std::endl;
	
	
	//100000 de 103443 mikrosaniyede breaklý breaký kaldýrýrsak 200106 mikro saniye oluor chrono zaman kutubtur;
	return 0;
}