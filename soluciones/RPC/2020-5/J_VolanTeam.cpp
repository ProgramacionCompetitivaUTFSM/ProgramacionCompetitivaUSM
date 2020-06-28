#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	string a, b;
	cin >> a;
	cin >> b;

	long long CA = 0;
	long long CB = 0;
	for(i = 0; i < n - 1; i++){
		if(a[i] != a[i + 1]) CA++;
		if(b[i] != b[i + 1]) CB++;
	}

	if(a[n - 1] != a[0]) CA++;
	if(b[n - 1] != b[0]) CB++;
	
	if(CA > CB) cout << "yes\n";
	else if(CB > CA || CA == 0 || CA == a.length()) cout << "no\n";
	else cout << "yes\n";
	return 0;
}