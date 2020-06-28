#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	if(N == 1) cout << "Either\n";
	else if(N == 2 || N == 6 || N == 10) cout << "Odd\n";
	else if(N == 4 || N == 8) cout << "Even\n";
	else cout << "Either\n";
	return 0;
}