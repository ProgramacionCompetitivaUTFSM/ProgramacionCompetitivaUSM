#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, k, k_i, k_i1, i;
	long long press;

	cin >> t;
	while(t--){
		press = 0;
		cin >> n >> k;
		i = 0;
		while(i < k){
			if(i == 0) cin >> k_i;
			else{
				cin >> k_i1;

				if(k_i == k_i1) press++;
				else{
					if(k_i + 1 != k_i1){
						if(k_i > k_i1){
							press += min(k_i - k_i1 + 1, n - k_i + k_i1 - 1);
						}
						else{
							press += min(k_i1 - k_i - 1, n - k_i1 + 1 + k_i - 1 + 1);
						}
					}
				}
				k_i = k_i1;
			}
			i += 1;
		}
		cout << press << "\n";
	}
	return 0;
}