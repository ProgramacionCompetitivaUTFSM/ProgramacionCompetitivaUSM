#include <bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(2);

	int t; cin >> t;
	while(t--) {
		lli n; cin >> n;
		/*lli layer = 0;
		lli max = 4, oth = 4;
		while(n > max) {
			layer++;
			oth += 8;
			max += oth;
		}
		max -= oth;*/
		lli layer = ceil(sqrt(n)/2) - 1;
		lli max = 4 * layer * layer;
		lli x, y;
		char dir;
		if (n <= max + (4*layer) + 1) {
			x = 2*layer + 1;
			y = -1*layer;
			dir = 'l';
		}
		else if (n <= max + (6*layer) + 2) {
			max += (4*layer) + 1;
			x = -2*(layer+1);
			y = -1*(layer+1);
			dir = 'u';
		}
		else {
			max += (6*layer) + 2;
			x = -1;
			y = layer+2;
			dir = 'd';
		}
		//cout << dir << endl;
		while(max != n) {
			//max++;
			//cout << x << ' ' << y << '\n';
			//cout << max << endl;
			if (dir == 'l') {
				x -= (n - max);
			} else if (dir == 'u') {
				x += (n - max);
				y += (n - max);
			} else { // dir == 'd'
				x += (n - max);
				y -= (n - max);
			}
			max = n;
		}
		cout << x << ' ' << y << '\n';
	}
	return 0;
}