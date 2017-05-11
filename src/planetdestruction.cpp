#include <algorithm>
#include <iomanip>
#include <iostream>
#include <set>

using namespace std;

const long double eps = 0.000000000001;

struct Load {
	long double p, t, v;

	bool operator<(const Load& rhs) const {
		return p < rhs.p;
	}
};

Load l[10000];

long double wrap(long double x) {
    return x - 2 * M_PI * floor(x / 2 * M_PI);
}

int main() {
	int T;
	cin >> T;

	while (T--) {
		long double R;
		int K;
		cin >> R >> K;

		for (int i = 0; i < K; i++) {
			long double X, Y, Vr, Vs;
			cin >> X >> Y >> Vr >> Vs;

			l[i].p = atan2(Y, X);
			long double x = cos(l[i].p) * R, y = sin(l[i].p) * R;
			l[i].t = sqrt((X - x) * (X - x) + (Y - y) * (Y - y)) / Vr;
			l[i].v = Vs / R;
		}

		long double low = 0, high = (1 << 30), t;
		while (high - low > eps) {
			t = (low + high) / 2;

			multiset<pair<long double, bool> > b;

			int d = 0;
			for (int i = 0; i < K; i++) {	
				if (l[i].t > t) {
					continue;
				}
				
				if (l[i].v * (t - l[i].t) > M_PI) {
					d = K + 1;
					break;
				}

				long double s = l[i].v * (t - l[i].t),
					from = wrap(l[i].p - s),
					to = wrap(l[i].p + s);

				d += (l[i].p - s < 0);

				b.insert({ from, true });
				b.insert({ to, false });
			}
			
			bool done = true;
			for (const pair<long double, bool>& p : b) {
				if (d <= 0) {
					done = false;
					break;
				}		
				d += (p.second ? 1 : -1);	
			}

			done ? high = t : low = t;
		}

		cout << setprecision(20) << t << endl;
	}

	return 0;
}