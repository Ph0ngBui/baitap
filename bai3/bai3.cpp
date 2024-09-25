#include <iostream>
using namespace std;
int main(){
	int a[1000000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = n + 1; j < n; j++) {
			if (a[i] == a[j]) {
				cout << a[n];
			}
		}
		break;
	}
	return 0;
}
