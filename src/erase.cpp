#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	string a, b;
	cin >> a >> b;

	int n = a.size();
	for(int i = 0; i < n; i++) {
		if((a[i] == b[i]) == N % 2) {
			cout << "Deletion failed" << endl;
			return 0;
		}
	}
	
	cout << "Deletion succeeded" << endl;

	return 0;
}