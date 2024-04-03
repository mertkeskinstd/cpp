#include <iostream>
#include<stdlib.h>
constexpr auto MAX_SIZE = 100;
using namespace std;


int main(int argc , char ** argiv) {
	char text[MAX_SIZE];
	char* str = text;
	int sayac = 0;
	cout << "metni giriniz :";
	cin >> text;
	while (*(str++) != '\0') {
		sayac++;
	}
	cout << text << "uzunlugu :" << sayac;




	return 0;
}