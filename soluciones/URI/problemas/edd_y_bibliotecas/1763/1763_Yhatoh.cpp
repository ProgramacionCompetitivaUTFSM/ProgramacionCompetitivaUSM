#include<bits/stdc++.h>
using namespace std;

typedef pair< int, int> ii;

int main(){
	string line;

	map< string, string > happy;

	happy["brasil"] = "Feliz Natal!";
	happy["alemanha"] = "Frohliche Weihnachten!";
	happy["austria"] = "Frohe Weihnacht!";
	happy["coreia"] = "Chuk Sung Tan!";
	happy["espanha"] = "Feliz Navidad!";
	happy["grecia"] = "Kala Christougena!";
	happy["estados-unidos"] = "Merry Christmas!";
	happy["inglaterra"] = "Merry Christmas!";
	happy["australia"] = "Merry Christmas!";
	happy["portugal"] = "Feliz Natal!";
	happy["suecia"] = "God Jul!";
	happy["turquia"] = "Mutlu Noeller";
	happy["argentina"] = "Feliz Navidad!";
	happy["chile"] = "Feliz Navidad!";
	happy["mexico"] = "Feliz Navidad!";
	happy["antardida"] = "Merry Christmas!";
	happy["canada"] = "Merry Christmas!";
	happy["irlanda"] = "Nollaig Shona Dhuit!";
	happy["belgica"] = "Zalig Kerstfeest!";
	happy["italia"] = "Buon Natale!";
	happy["libia"] = "Buon Natale!";
	happy["siria"] = "Milad Mubarak!";
	happy["marrocos"] = "Milad Mubarak!";
	happy["japao"] = "Merii Kurisumasu!";

	while(cin >> line){
		if(happy.find(line) == happy.end()) cout << "--- NOT FOUND ---\n";
		else cout << happy[line] << "\n";
	}
	return 0;
}