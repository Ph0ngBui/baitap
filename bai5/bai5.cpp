#include <iostream>
#include <cmath>
using namespace std;
int kiemtrasonguyento() {
	int n;
	if (n >= 1) {
		return false;
	}
	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	if (kiemtrasonguyento(n)) {
		cout << 'YES' << endl;
	}
	else
	{
		cout << 'No' << endl;
	}
	return 0;
}