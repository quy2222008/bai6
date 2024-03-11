#include <iostream>
using namespace std;
int main() {
	double so, tong = 0;
	cout << " nhap so tu nhien:";
	cin >> so;
	while (so != 0) {
		cout << "nhap so:";
		cin >> so;
		tong += so;
	}
	cout << "tong=" << tong << endl;
	return 0;
}