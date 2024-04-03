#include <iostream>
#include <math.h>
using namespace std;

double hipo(double x, double y) {
	double sonuc = sqrt((x*x ) + (y*y));
	return sonuc;

}

int main() {

	double x, y;
	cin >> x;
	cout << endl;
	cin >> y;
	cout << "ucgenin hipotenusu :" << hipo(x, y);



	return 0;

}