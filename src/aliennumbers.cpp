#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	for(int t = 1; t <= T; t++) {
		string an, sl, tl;
		cin >> an >> sl >> tl;

		int64_t n = an.size(), p = sl.size(), 
			q = tl.size(), b = 1, d = 0;
		for(int i = n - 1; i >= 0; i--, b *= p) {
			int64_t j = 0;
			while(sl[j] != an[i]) j++;
			d += j * b;
		}

		b = 1;
		string ans = "";
		if(d == 0) ans.push_back(tl[0]);

		while(b <= d) b *= q;
		b /= q;
		while(b > 0) {
			int c = d / b;
			ans.push_back(tl[c]);
			d -= b * c;
			b /= q;
		}

		cout << "Case #" << t << ": " << ans << endl;
	}

	return 0;
}