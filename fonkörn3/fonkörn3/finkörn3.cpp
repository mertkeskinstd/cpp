#include <iostream>
#include <stdlib.h>
using namespace std;

double ortalama(int v , int f) {
	return(v * 0.4) + (f * 0.6);
}

int main() {

	int v , f;

	cout << "lutfen vize notunuzu giriniz :"  ;
	cin >> v;
	cout << "lutfen final notunuzu giriniz :" ;
	cin >> f;
	cout << endl;
	cout <<"Ortalama :"<< ortalama(v, f);





	return 0;
}