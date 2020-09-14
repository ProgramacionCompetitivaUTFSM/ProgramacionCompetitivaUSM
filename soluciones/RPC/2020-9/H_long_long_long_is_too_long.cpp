#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main () {
	ll n; cin >> n;
	ll two = 0;
	ll five = 0;
	while(n % 2 == 0) {
		two++;
		n /= 2;
	}
	while(n % 5 == 0) {
		five++;
		n /= 5;
	}
	vector <ll> ans;
	ll tmp1 = 1;
	for(int i = 0; i <= two; i++) {
		ll tmp2 = tmp1;
		for(int j = 0; j <= five; j++) {
			ans.push_back(tmp2);
			tmp2 *= 5;
		}
		tmp1 *= 2;
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << '\n';
	for(auto i : ans) {
		cout << i << "\n";
	}
	return 0;
}