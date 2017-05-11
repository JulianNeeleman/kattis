#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();

	int u = 0, d = 0, a = 0;
	for(int i = 1; i < n; i++) {
		if(s[i] != s[i - 1]) a++;
		s[i] == 'U' ? u++ : d++;
	}

	d *= 2, u *= 2;
	if(s[0] == 'D' && s[1] == 'D') d--;
	if(s[0] == 'D' && s[1] == 'U') d++;
	if(s[0] == 'U' && s[1] == 'D') u++;
	if(s[0] == 'U' && s[1] == 'U') u--;

	cout << d << endl;
	cout << u << endl;
	cout << a << endl;
	return 0;
}