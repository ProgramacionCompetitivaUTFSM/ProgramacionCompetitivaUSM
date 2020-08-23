#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(2);

	long long int t, n;
	cin >> t;
	for (long long int i = 0; i < t; i++) {
		cin >> n;
		cout << (n+1)*(n+1)-1 << "\n";
	}
}