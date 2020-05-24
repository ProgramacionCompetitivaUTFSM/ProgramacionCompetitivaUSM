#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(6);

	int n, k, i;

	double x, y, z;
	cin >> n >> k;
	vector<double> radios(n);
	for(i = 0; i < n; i++){
		cin >> x >> y >> z;
		radios[i] = sqrt(x * x + y * y + z * z);
	}
	sort(radios.begin(), radios.end());

	cout << radios[k - 1] << "\n";

	return 0;
}
