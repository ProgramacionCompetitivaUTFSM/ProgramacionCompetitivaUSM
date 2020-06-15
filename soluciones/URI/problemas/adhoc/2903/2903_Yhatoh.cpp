#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(4);
	double n,t;
	cin >> n;
	n = n/360.0;
	t = n;
	int i = 1;
	while(abs(round(t*100000)/100000) != floor(round(t*100000)/100000)){
		t+=n;
		i++;
	}
	cout << i << "\n";
}