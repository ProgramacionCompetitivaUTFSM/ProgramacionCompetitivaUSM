#include<bits/stdc++.h>

using namespace std;

bool iMasQuej (int i,int j) { return (i>j); }

int whatIs(char i){
	if(i == '1') return 1;
	else if(i == '2') return 2;
	else if(i == '3') return 3;
	else if(i == '4') return 4;
	else if(i == '5') return 5;
	else if(i == '6') return 6;
	else if(i == '8') return 8;
	else if(i == '9') return 9;
	else return 7;
	
}

int main(){
	int n, m, i;
	cin >> n >> m;

	vector< int > v;
	vector< int > d;
	
	string cas;

	for(i = 0; i < n * m; i++){
		cin >> cas;
		if(cas.at(1) == 'V') v.push_back(whatIs(cas.at(0)));
		else d.push_back(whatIs(cas.at(0)));
	}

	sort(v.begin(), v.end(), iMasQuej);
	sort(d.begin(), d.end(), iMasQuej);

	for(i = 0; i < n * m; i++){
		if(i < v.size()) cout << v[i] << "V\n";
		else cout << d[i - v.size()] << "D\n";
	}
}