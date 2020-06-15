#include<bits/stdc++.h>

using namespace std;

int main(){
	int q, d, p;

	cin >> q;
	while(q != 0){
		cin >> d >> p;

		d = d * q * p / abs(p - q);
		cout << d << (d == 1 ? " pagina\n" : " paginas\n");

		cin >> q;
	}
	return 0;
}
