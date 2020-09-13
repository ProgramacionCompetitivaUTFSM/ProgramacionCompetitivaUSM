#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(5);
	double r;
	cin >> r;
	cout << (2 * r * sqrt(2 + sqrt(3)) + 2 * r) * (2 * r * sqrt(2 + sqrt(3)) + 2 * r) << "\n";

	return 0;
}