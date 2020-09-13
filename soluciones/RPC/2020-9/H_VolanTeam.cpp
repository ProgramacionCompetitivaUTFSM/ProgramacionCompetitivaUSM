#include<bits/stdc++.h>
using namespace std;

vector< long long > potencias2(62, -1);
vector< long long > potencias5(62, -1);

long long calcularPow(long long exp, long long pot){
	if(exp == 2 && potencias2[pot] != -1) return potencias2[pot];
	else if(exp == 5 && potencias5[pot] != -1) return potencias5[pot];

	long long i, res;
	res = 1;
	for(i = 0; i < pot; i++){
		res *= exp;
	}
	if(exp == 2) potencias2[pot] = res;
	else if(exp == 5) potencias5[pot] = res;
	return res;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(5);
	long long n, n2, n3, pot2, pot5;
	long long i, j;

	cin >> n;

	n2 = n;
	pot2 = 0;
	while(n2 % 2 == 0){
		n2 /= 2;
		pot2++;
	}

	n3 = n;
	pot5 = 0;
	while(n3 % 5 == 0){
		n3 /= 5;
		pot5++;
	}


	vector< long long > results;
	for(i = 0; i <= pot2; i++){
		for(j = 0; j <= pot5; j++){
			results.push_back(calcularPow(2, i) * calcularPow(5, j));
		}
	}
	sort(results.begin(), results.end());
	cout << results.size() << "\n";
	for(i = 0; i < results.size(); i++){
		cout << results[i] << "\n";
	}
	return 0;
}