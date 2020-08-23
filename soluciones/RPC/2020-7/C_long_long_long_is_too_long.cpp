#include <bits/stdc++.h>

using namespace std;

int main () {
	int cx, cy, r;
	cin >> cx >> cy >> r;
	int bx, by, s;
	cin >> bx >> by >> s;
	int tx = bx+s, ty = by+s;
	if (bx <= cx and cx <= tx and by <= cy and cy <= ty) {
		cout << 2 << endl;
		return 0;
	}
	vector <int> dist (4);
	dist[0] = ((cx-bx)*(cx-bx))+((cy-by)*(cy-by));
	dist[1] = ((cx-bx)*(cx-bx))+((cy-ty)*(cy-ty));
	dist[2] = ((cx-tx)*(cx-tx))+((cy-by)*(cy-by));
	dist[3] = ((cx-tx)*(cx-tx))+((cy-ty)*(cy-ty));
	sort(dist.begin(), dist.end());
	if (dist[0] < r*r) {
		cout << 2 << endl;
		return 0;
	}
	if (dist[0] == r*r) {
		if (dist[1] == r*r)
			cout << 2 << endl;
		else
			cout << 1 << endl;
		return 0;
	}

	int nx[4] = {cx-r, cx,   cx+r, cx  };
	int ny[4] = {cy  , cy+r, cy,   cy-r};
	for(int i = 0; i < 4; i++) {
		if ((nx[i] == bx or nx[i] == tx) and (by <= ny[i] and ny[i] <= ty)) {
			cout << 1 << endl;
			return 0;
		}
		if ((ny[i] == by or ny[i] == ty) and (bx <= nx[i] and nx[i] <= tx)) {
			cout << 1 << endl;
			return 0;
		}
		if (bx <= nx[i] and nx[i] <= tx and by <= ny[i] and ny[i] <= ty) {
			cout << 2 << endl;
			return 0;
		}
	}

	cout << 0 << endl;
	return 0;
}