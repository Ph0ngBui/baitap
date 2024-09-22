#include <iostream>
#include <string.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = s.length(); i >= 0; i--) {
		if (s[i] == '0') {
			cout << i + 1;
			break;
		}
	}
}