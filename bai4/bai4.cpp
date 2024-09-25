#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i += 3);
	cout << 3 * n - 1;
	return 0;
}