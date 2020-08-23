#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    int eresDebilPrime[100000], totalP = 0;
	int primont[1000000] = {};
    primont[1] = 1;

    for (int i = 2; i <= 1000000; i++) {
        if(!primont[i]) {
            for (int j = 1000000, k = 1000000 / i; k >= i; j -= i, k--) {
            	primont[j] = 1;
            }
            eresDebilPrime[totalP++] = i;
        }
    }

	int64_t t, n, m, r, p, s;
	cin >> t;

	while (t--) {
		cin >> n;
		r = 1;
		m = n;
		
		for (int i = 0; i < totalP && eresDebilPrime[i] * eresDebilPrime[i] <= m; i++) {
			if(m % eresDebilPrime[i]) continue;
			s = p = eresDebilPrime[i];
			
			while (m % p == 0) {  
				m = m / p;
				s = s * p;
			}

			// AAAAAAAAAH GABO ESTA ES TU FÓRMULA 
			r = r * ((s - 1) / (p - 1));
			if(r > n * 2) break;
		}

		if(m + 1 != 2) r = r * (m + 1);
		
		if(r < n * 2) {
			cout << "deficient" << '\n';
			continue;
		}

		if(r == n * 2) {
			cout << "perfect" << '\n';
			continue;
		}
		
		cout << "abundant" << '\n';
	}
	return 0;
}
