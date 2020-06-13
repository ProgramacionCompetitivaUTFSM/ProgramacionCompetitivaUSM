#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, oper;
	cin >> a >> b;
	oper = 0;

	while(a != b){
		if(a > b && a % 2)
			a += 1;
		else if(a > b)
			a /= 2;
		else
			a += 1;
		oper += 1;
	}
	cout << oper << "\n";
	return 0;
}      