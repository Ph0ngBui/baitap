#include <iostream>
using namespace std;
void min_Sort(int a[], int bd, int kt) {
	for (int i = bd; i < kt; i++) {
		int vitricuasonhonhat = i;
		for (int j = i + 1; j < kt; j++) {
			if (a[i] > a[j]) {
				vitricuasonhonhat = j;
			}
		}
		swap(a[i], a[vitricuasonhonhat]);
	}
}
void max_Sort(int a[], int bd, int kt) {
	for (int i = bd; i < kt; i++) {
		int vitricuasolonnhat = i;
		for (int j = i + 1; j < kt; j++) {
			if (a[i] < a[j]) {
				vitricuasolonnhat = j;
			}
		}
		swap(a[i], a[vitricuasolonnhat]);
	}
}
int main() {
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int mid = (n + 1) / 2;
	max_Sort(a, 0, mid);
	min_Sort(a, mid, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] <<' ';
	}
	return 0;
}