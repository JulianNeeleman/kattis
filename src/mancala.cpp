#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int P;
	cin >> P;

	while (P--) {
		int K, N, B = 0;
		cin >> K >> N;

		int b[100]{0};
		b[0] = N;
		
		while (b[0] > 0) {
			int i = 0;
			while (b[i] > 0) {
				b[i]--;
				i++;
			}
			b[i] = i;		
			B = max(B, i);
		}

		cout << K << " " << B << endl;
		for (int i = 1; i <= B; i++) {
			cout << b[i] << " "; 
			if (i % 10 == 0) cout << endl;
		}
		cout << endl;
	}

	return 0;
}