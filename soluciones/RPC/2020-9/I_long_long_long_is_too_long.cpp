#include <bits/stdc++.h>

using namespace std;

int main () {
	int n; cin >> n;
	int x, y; cin >> x >> y;
	int xone = x, yone = y;
	int xmin = x, xmax = x;
	int ymin = y, ymax = y;
	int ans = 0;
	for(int i = 1; i < n; i++) {
		int xprev = x, yprev = y;
		cin >> x >> y;
		ans += abs(x - xprev);
		ans += abs(y - yprev);
		if (x > xmax) xmax = x;
		if (y > ymax) ymax = y;
		if (x < xmin) xmin = x;
		if (y < ymin) ymin = y;
		//cout << ans << endl;
	}
	ans += abs(x - xone);
	ans += abs(y - yone);
	ans -= 2*(xmax - xmin);
	ans -= 2*(ymax - ymin);
	cout << ans << '\n';
	return 0;
}