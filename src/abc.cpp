#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int a[3];

int main() {
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	sort(a, a + 3);

	char ch;
	for (int i = 0; i < 3; i++) {
		cin >> ch;
		switch(ch) {
			case 'A': {
				cout << a[0];
				break;
			}
			case 'B': {
				cout << a[1];
				break;
			}
			case 'C': {
				cout << a[2];
				break;
			}
		}
		cout << " ";
	}

	cout << endl;

	return 0;
}