#include<bits/stdc++.h>

using namespace std;

int main(){
	string line;
	int i, cont, boola;


	while(cin >> line){
		vector < int > parentesis;
		boola = 1;
		for(i = 0; i < line.length(); i++){
			if(line.at(i) == '(') parentesis.push_back(1);
			else if(line.at(i) == ')'){
				if(parentesis.size() > 0) parentesis.erase(parentesis.begin() + parentesis.size() - 1);
				else {boola = 0; break;}
			}
		}
		if(boola == 0) cout << "incorrect\n";
		else{
			if(parentesis.size() > 0) cout << "incorrect\n";
			else cout << "correct\n";
		}
	}
	return 0;
}
	