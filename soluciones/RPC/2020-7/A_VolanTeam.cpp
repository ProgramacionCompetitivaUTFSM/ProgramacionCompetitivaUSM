#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	cin >> n;
	if(n == 2) cout << 1 << "\n";
	else{
		int suma = 7 * (n / 3);
		int rest = n % 3;
		if(rest == 2) cout << suma + 1 << "\n";
		else if(rest == 1) cout << suma - 3 << "\n";
		else cout << suma << "\n";
	}
	return 0;
}