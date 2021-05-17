#include <iostream>
using namespace std;

int main() {
	int i = 50;
	double d = 50.0;
	double d2 = 50.10;
	cout << (int)d2 << ", " << d2 << endl;

	cout << "i == (int)d    es " << (i == (int)d) << endl;
	cout << "(double)i != d es " << ((double)i != d ) << endl;
	cout << "i > (int)d     es " << (i > (int)d) << endl;
	cout << "(double)i < d  es " << ((double)i < d ) << endl;
	cout << "i >= (int)d    es " << (i >= (int)d) << endl;
	cout << "(double)i <= d es " << ((double)i <= d ) << endl;
}
