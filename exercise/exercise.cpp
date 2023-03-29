#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

double rerata(double a, double b) {
	return (a + b) / 2;
}


string status(double c) {
	if (c >= 70)
		return "diterima";
	else
		return "ditolak";
}

string status2(double r, double n) {
	if (r >= 70 || n > 80)
		return "diterima";
	else
		return "ditolak";
}

void input() {
	char n;

	cout << "Masukkan nama = ";
	cin >> n;
}


int main() {
	double nilm, nili;
	cout << "masukkan nilai matematika = ";
	cin >> nilm;
	cout << "masukkan nilai bahasa inggris = ";
	cin >> nili;

	input();
	cout << "\nstatus kelulusan : " << status(rerata(nilm, nili));
	return 0;

}
	