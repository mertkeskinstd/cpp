#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

double dairealan(int r) {
	return M_PI * r * r;

}
double dairecevre(int r) {
	return M_PI * r * 2;

}





int main() {
	int r;
	double sonuc = 0;
		double sonuc2 = 0;
	cout << "lutfen sayi giriniz";
	cin >> r;
sonuc=	dairealan(r);
sonuc2=	dairecevre(r);
cout <<"dairenin alani :"<< sonuc << endl;
cout <<"dairenin cevresi :"<< sonuc2;
	return 0;
}