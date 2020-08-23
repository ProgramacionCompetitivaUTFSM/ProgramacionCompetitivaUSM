#include <bitset>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;

ll _sieve_size;
bitset<1000010> bs;
vi primes;

void sieve(ll upperbound) {
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
		for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
		primes.push_back((int)i);
	} 
}

ll sumDiv(ll N) {
	ll PF_idx = 0, PF = primes[PF_idx], ans = 1; // start from ans = 1
	while (PF * PF <= N) {
		ll power = 0;
		while (N % PF == 0) { N /= PF; power++; }
		ans *= ((ll)pow((double)PF, power + 1.0) - 1) / (PF - 1);
		PF = primes[++PF_idx];
	}
	if (N != 1) ans *= ((ll)pow((double)N, 2.0) - 1) / (N - 1); // last
	return ans;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(2);

	sieve(1000000);
	ll t, n;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		cin >> n;
		ll s = sumDiv(n) - n;
		if (s < n) {
			cout << "deficient\n";
		} else if (s > n) {
			cout << "abundant\n";
		} else {
			cout << "perfect\n";
		}
	}
}