#include <iostream>
using namespace std;

#include <complex>
#include <cmath>
// fark git cannot reconize Chinese
int main() {

	complex<double> z1, z2;
	cout << " Please in put a complex number \n\t";
	cin >> z1; // e.g. (3,4) means 3+4i
	cout << " Please in put another complex number \n\t";
	cin >> z2;
	cout << "complex number z1 = " << z1 << endl;
	cout << " Re(z1) = " << z1.real() << endl;
	cout << " Im(z1) = " << z1.imag() << endl;
	cout << " z1 + z2 = " << z1 + z2 << endl;
	cout << " z1 - z2 = " << z1 - z2 << endl;
	cout << " z1 * z2 = " << z1 *z2 << endl;
	cout << " z1 / z2 = " << z1 / z2 << endl;
	if ( z1 == z2 )
		cout << " z1 == z2 " << endl;
	cout << " norm of z1 = " << norm(z1) << endl;
	cout << " arg of z1 = " << arg(z1) << endl;
	cout << " conjugate of z1 = " << conj(z1) << endl;
	cout << " exp(z1) = " << exp(z1) << endl;
	// so, when I write here ,what will happen?
	return 0;
}
