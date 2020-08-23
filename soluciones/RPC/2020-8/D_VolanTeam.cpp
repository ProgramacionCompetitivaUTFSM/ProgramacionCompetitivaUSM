#include <bits/stdc++.h>
using namespace std;

long long sum(int n){ 
	long long bigSum = 0;
    for (int i = 1; i <= sqrt(n); i++){ 
        if (n%i == 0){
            if (n/i == i) bigSum += i;
            else bigSum += i + n / i; 
        } 
    }
    return bigSum;
} 
  
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4); 
	long long t, n;
	cin >> t;
	while(t--){
		cin >> n;
		long long res = sum(n) - n;
		if(res < n) cout << "deficient\n";
		else if(res > n) cout << "abundant\n";
		else cout << "perfect\n";
	}
    return 0; 
} 
