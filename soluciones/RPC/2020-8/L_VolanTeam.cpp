#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    unsigned int t, n, r, m;
    cin >> t;

	while (t--) {
		r = 0;
		cin >> n;
		for (int i = 0; i < 32; i++) {
			m = (n << i) | (n >> (32 - i)) & 31U; 
			r = r | 1U << m;
		}

		if(r == UINT_MAX) {
			cout << "yes";
		} else {
			cout << "no";
		}
		cout << '\n';
	}

	return 0;
}
