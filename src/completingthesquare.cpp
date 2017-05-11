#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

struct Point {
	int x, y;

	inline Point operator+(const Point& rhs) {
        return { x + rhs.x , y + rhs.y };
    }

    inline Point operator-(const Point& rhs) {
        return { x - rhs.x , y - rhs.y };
    }
};

int dt(const Point& a, const Point& b) {
	return (a.x - b.x) * (a.x - b.x) +
		(a.y - b.y) * (a.y - b.y);
}

int main() {
	Point a, b, c, d;
	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

	int ab = dt(a, b), ac = dt(a, c), bc = dt(b, c);
	if (ab > ac && ab > bc) {
		d = a + b - c;
	} else if (ac > ab && ac > bc) {
		d = a + c - b;
	} else {
		d = b + c - a;
	}

	cout << d.x << " " << d.y << endl;

	return 0;
}