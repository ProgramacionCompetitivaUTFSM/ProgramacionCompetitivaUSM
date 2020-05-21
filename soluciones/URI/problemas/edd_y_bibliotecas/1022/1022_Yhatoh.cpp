#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	int t;
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(2);
	int t;
	int n1, n2, d1, d2, finN, finD, gcds;
	char oper1, oper2, oper3;


	cin >> t;
	while(t--){
		cin >> n1 >> oper1 >> d1 >> oper2  >> n2 >> oper3 >> d2;
		if(oper2 == '+'){
			finN = n1 * d2 + n2 * d1;
			finD = d1 * d2;
		}
		else if(oper2 == '-'){
			finN = n1 * d2 - n2 * d1;
			finD = d1 * d2;
		}
		else if(oper2 == '*'){
			finN = n1 * n2;
			finD = d1 * d2;
		}
		else{
			finN = n1 * d2;
			finD = n2 * d1;
		}

		n1 = finN;
		d1 = finD;

		gcds = gcd(finN, finD);
		while(gcds != 1){
			finN = finN / gcds;
			finD = finD / gcds;	
			gcds = gcd(finN, finD);
		}

		if(finD < 0){
			finN = -1 * finN;
			finD = -1 * finD;
		}
		cout << n1 << "/" << d1 << " = " << finN << "/" << finD << "\n";
	
	}
	
	return 0;
}