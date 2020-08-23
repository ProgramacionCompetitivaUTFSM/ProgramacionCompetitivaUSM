#include <bits/stdc++.h>

using namespace std;

unsigned int rot(unsigned int value) {
	return (value >> 1) | (value << 31);
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(2);

	uint mask = 31;
	uint t; cin >> t;
	while (t--) {
		uint n; cin >> n;
		bool ans[32] = {};
		uint shf = n;
		do {
			ans[shf & mask] = true;
			shf = rot(shf);
		} while (shf != n);
		bool final = true;
		for (int i = 0; i < 32; i++)
			final &= ans[i];
		if (final) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}