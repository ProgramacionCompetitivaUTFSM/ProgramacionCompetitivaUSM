#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

int main(){
	string alphabet;

	cin >> alphabet;

	int letters = alphabet.length();


	vector<string> outs;

	string s;

	string copy;

	int l = 0;
	while(cin >> s){
		l =  s.length();

		//intercambiar
		for (int i = 0; i < l; ++i){
			for (int j = 0; j < letters; ++j){
				if(s[i] != alphabet[j]){
					copy = s;
					copy[i] = alphabet[j];
					outs.push_back(copy);
				}
				
			}
			
		}
		//eliminar
		for (int i = 0; i < l; ++i){
			copy = "";
			for (int j = 0; j < l; ++j){
				if (i != j){
					copy += s[j];

				}
			}
			outs.push_back(copy);
		}

		//agregar
		for (int i = 0; i <= l; ++i){ //donde

			for (int j = 0; j < letters; ++j){ //todas las letras
				copy = "";
				for (int k = 0; k < l; ++k){
					if (i==k) copy += alphabet[j];
					
					if(k < l) copy += s[k];
				}
				if(i == l) copy += alphabet[j];
				outs.push_back(copy);
				
			}
		}
	}
	sort(outs.begin(), outs.end());

	string anterior = "";
	for (int i = 0; i < outs.size(); ++i){
		if(anterior != outs[i]){
			cout << outs[i] << endl;
			anterior = outs[i];
		} 

	}
	
	

	return 0;
}