#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int lets[26] = {};
	string in; cin >> in;
	for (int i = 0; i < in.size(); i++)
		lets[in[i]-'a']++;
	long long int ans = 1;
	for (int i = 0; i < 26; i++){
		ans *= (lets[i] + 1);
		if (ans > 11092019)
		    ans %= 11092019;
	}
	cout << ans % 11092019 << endl;
	return 0;
}