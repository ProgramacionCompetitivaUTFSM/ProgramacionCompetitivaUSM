#include <bits/stdc++.h>
using namespace std;

int main(){
	int y, init, month;
	cin >> y;
	init = 2018;
	month = 3;
	while(y > init){
		init += 2;
		month += 2;
		if(month >= 12){
			init++;
			month = month % 12;
		}
	}
	
	if(y == init) cout << "yes\n";
	else cout << "no\n";
	return 0;
}