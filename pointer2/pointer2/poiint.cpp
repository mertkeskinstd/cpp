#include <iostream>
using namespace std;


int main() {
	cout << endl << endl << endl;
	int arr[] = { 34,47,89 };   //dizilerde içerisinde adres tutar her sayýyý bir adrese atar ve o adresi tutar 
	//pointerlara cok benzer  
	int* p;
	p = arr;
	cout << p << endl;
	cout << arr << endl;
	cout << endl << *p << endl;
	cout << endl << *(p + 1);
	cout << endl << *(p + 2);





	cout << endl;
	return 0;
}