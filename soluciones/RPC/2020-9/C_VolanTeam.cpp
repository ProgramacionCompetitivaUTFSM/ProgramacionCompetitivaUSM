#include<bits/stdc++.h>

using namespace std;

int added(string word, string dicc){
	int i, j, lenWord, lenDicc;
	lenWord = word.length();
	lenDicc = dicc.length();

	if(lenWord != lenDicc + 1) return 0;
	
	j = 0;
	for(i = 0; i < lenWord; i++){
		if(j < lenDicc && word[i] == dicc[j]) j++;
	}
	return (j == lenDicc ? 1 : 0);
}

int ommitted(string word, string dicc){
	int i, j, lenWord, lenDicc;
	lenWord = word.length();
	lenDicc = dicc.length();

	if(lenWord + 1 != lenDicc) return 0;
	
	j = 0;
	for(i = 0; i < lenDicc; i++){
		if(j < lenWord && dicc[i] == word[j]) j++;
	}
	return (j == lenWord ? 1 : 0);
}

int oneDifferent(string word, string dicc){
	if(word.length() != dicc.length()) return 0;

	int i, diff = 0;
	for(i = 0; i < word.length(); i++){
		if(word[i] != dicc[i]) diff++;
		if(diff > 1) return 0;
	}

	if(diff == 1) return 1;
	return 0;
}

int twoTransposed(string word, string dicc){
	if(word.length() != dicc.length()) return 0;

	int i, diff;
	diff = 0;

	for(i = 0; i < word.length() - 1; i++){
		if(word[i] != dicc[i]){
			if(dicc[i + 1] == word[i] && word[i + 1] == dicc[i]){ 
				diff++;
				i++;
			}
			else return 0;
		}
	}

	if(diff == 1) return 1;
	else return 0;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(5);
	int d, n, i, booli;
	string word;

	cin >> d;

	i = 0;
	vector< string > dicc(d);
	while(d > i){
		cin >> dicc[i];
		i++;
	}

	cin >> n;
	while(n--){
		cin >> word;
		cout << word << "\n";
		booli = 0;
		for(i = 0; i < d; i++){
			if(word.compare(dicc[i]) == 0){booli = 1; break;}
		}

		if(booli) cout << "CORRECT\n";
		else{
			booli = 1;
			for(i = 0; i < d; i++){
				if(ommitted(word, dicc[i])){
					cout << "ONE LETTER OMITTED FROM " << dicc[i] << "\n";
					booli = 0;
				}
				if(added(word, dicc[i])){
					cout << "ONE LETTER ADDED TO " << dicc[i] << "\n";
					booli = 0;
				}
				if(oneDifferent(word, dicc[i])){
					cout << "ONE LETTER DIFFERENT FROM " << dicc[i] << "\n";
					booli = 0;
				}
				if(twoTransposed(word, dicc[i])){
					cout << "TWO LETTERS TRANSPOSED IN " << dicc[i] << "\n";
					booli = 0;
				}
			}
			if(booli) cout << "UNKNOWN\n";
		}
		if(n != 0) cout << "\n";


	}
	return 0;
}