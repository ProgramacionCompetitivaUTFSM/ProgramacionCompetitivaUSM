#include <bits/stdc++.h>

using namespace std;

int main () {
	int a; cin >> a;
	int b; cin >> b;
	int ans = 0;
	while(a != b) {
		if (a > b and a % 2 == 0)
			a /= 2;
		else
			a++;
		ans++;
	}
	cout << ans << endl;
}