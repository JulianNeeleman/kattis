#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

char add(char p, char q, int& r) {
	int v = p - '0',
		w = q - '0',
		s = v + w + r;
	r = (s >= 10);
	s %= 10;
	return s + '0';
}

int main() {
	string a, b;
	cin >> a >> b;

	int i = a.size() - 1,
		j = b.size() - 1,
		r = 0;

	string ans = "";
	while (i >= 0 || j >= 0 || r > 0) {
		ans += add(i < 0 ? '0' : a[i], j < 0 ? '0' : b[j], r);
		i--, j--;
	}

	reverse(ans.begin(), ans.end());

	cout << ans << endl;

	return 0;
}