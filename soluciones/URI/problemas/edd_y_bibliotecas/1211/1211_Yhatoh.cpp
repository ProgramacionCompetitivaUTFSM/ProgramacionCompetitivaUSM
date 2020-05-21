#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, i, j, caractSaved, size;

	while(cin >> n){
		vector<string> numeros(n);
		for(i = 0; i < n; i++) cin >> numeros[i];
		
		sort(numeros.begin(), numeros.end());

		caractSaved = 0;
		size = numeros[0].length();
		for(i = 0; i < n - 1; i++){
			for(j = 0; j < size; j++){
				if(numeros[i][j] == numeros[i + 1][j]) caractSaved = 0;
				else break;
			}
		}
		cout << caractSaved << "\n";
	}
	return 0;
}