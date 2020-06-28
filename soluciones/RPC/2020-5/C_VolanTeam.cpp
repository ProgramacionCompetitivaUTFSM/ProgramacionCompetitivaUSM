#include <bits/stdc++.h>
using namespace std;

int main(){
	int r, c, a, b, i, j, h, k;
	char grid[60][60];
	cin >> r >> c >> a >> b;
	vector< int > high(a);
	vector< int > wide(b);
	
	for(i = 0; i < a; i++) cin >> high[i];
	for(i = 0; i < b; i++) cin >> wide[i];

	char init = 'B';
	char toPrint = 'B';
	for(i = 0; i < a; i++){
		for(h = 0; h < high[i]; h++){
			for(j = 0; j < b; j++){
				for(k = 0; k < wide[j]; k++){
					cout << toPrint;
				}
				if(1 < wide.size()){
					if(toPrint == 'B') toPrint = 'W';
					else toPrint = 'B';
				}
			}
			cout << "\n";
		}
		if(init == 'B') init = 'W';
		else init = 'B';
		toPrint = init;
	}
	return 0;
}