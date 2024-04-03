#include <iostream>
using namespace std;
//  pointerların genel kullanımı bu şekilde oolup kendime yer ayırttırıyorum memoryde farketmeyen bir yeri pointer için sistem tutar 
//oraya hıc bır sekılde sistem tarafından mudahale edılemez
//eger işler bittikten sonra delete etmezsen ve data gelmeye devam ederse 
//memory sureklı ıcerısınde tutar ve belli bir raddeye geldıkten sorada crash olur program coker.
int main() {
/* 
	int* p = new int;
	*p = 7;
	cout << p << endl;
	cout << *p << endl;
	delete p;
	cout << p << endl;
	*/


	//eger bu xdegıskenini normal bir arr tanımlayıp ıcerısıne yazsaydın program calısmazdı ama poınter sayesınde calısıyor sebebı ıse
	//poınter zaten ıcerısınde adres tuttugu ıcın bıze rezerve edılen yerlerden ılk yerın adresinde hafızsında buda kullanıcı kac 
	//gırerse gırsın bellekte o kadar yer ayrılıyor ve tutuluyor iş bittikten sonra delete diyip tum tutulan yerlerı memory ıcerısınden
	//sılmek gerekıyor 
	int x;
	cout << "lutfen bir sayi giriniz:  ";
	cin >> x;
	int* p = new int[x];
	for (int i = 0; i < x; i++){
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < x; i++){
		sum = sum + p[i];
	}
	cout << "toplam:  " << sum<<endl<<endl<<endl;
	cout << p+2;
	cout << endl<<endl;
	delete[] p;
	return 0;
}