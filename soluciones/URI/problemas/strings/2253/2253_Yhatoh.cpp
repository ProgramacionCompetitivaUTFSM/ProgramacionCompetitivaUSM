#include<bits/stdc++.h>
using namespace std;

int main(){
	string line;
	int i, chara;
	int haveNum, haveUpper, haveLower, notRandomChar;

	while(getline(cin, line)){
		if(6 > line.length() || line.length() > 32){
			cout << "Senha invalida.\n";
		}
		else{
			haveNum = haveUpper = haveLower = 0;
			notRandomChar = 1;
			for(i = 0; i < line.length(); i++){
				chara = line.at(i);
				if(line.at(i) != '\n' && line.at(i) != '\r'){
					if(65 <= chara && chara <= 90) haveUpper = 1;
					else if(97 <= chara && chara <= 122) haveLower = 1;
					else if(48 <= chara && chara <= 57) haveNum = 1;
					else notRandomChar = 0; 
				}
			}

			if(notRandomChar && haveNum && haveUpper && haveLower)
				cout << "Senha valida.\n";
			else cout << "Senha invalida.\n";
		}
	}
	return 0;
}