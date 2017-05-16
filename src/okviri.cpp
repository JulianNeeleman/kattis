#include <iostream>

using namespace std;

string s;
int n;

void a() {
	for (int i = 0; i < n; i++) {
		cout << ".." << (i % 3 == 2 ? "*" : "#") << ".";
	}
	cout << "." << endl;
}

void b() {
	for (int i = 0; i < 2 * n; i++) {
		cout << "." << (i % 6 > 3 ? "*" : "#");
	}

	cout << "." << endl;
}

int main() {
	cin >> s;
	n = s.size();

	a();
	b();

	cout << "#." << s[0] << ".";
	for (int i = 1; i < n; i++) {
		cout << ((i - 1) % 3 > 0 ? "*" : "#") << "." << s[i] << ".";
	}

	cout << ((n - 1) % 3 == 2 ? "*" : "#") << endl;

	b();
	a();


	return 0;
}