#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, pow2, sumTo;
	while(cin >> a >> b){
		pow2 = 1;
		sumTo = 0;
		while(a != 0 && b != 0){
			if(a % 2 != b % 2) sumTo += pow2;
			pow2 *= 2;
			a /= 2;
			b /= 2;
		}

		while(a != 0){
			sumTo += pow2 * (a % 2);
			pow2 *= 2;
			a /= 2;
		}

		while(b != 0){
			sumTo += pow2 * (b % 2);
			pow2 *= 2;
			b /= 2;
		}

		cout << sumTo << "\n";
	}
	return 0;
}