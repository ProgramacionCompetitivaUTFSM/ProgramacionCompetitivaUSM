#include<bits/stdc++.h>
using namespace std;

typedef pair< int, int> ii;
typedef vector< ii > vii;

bool mySort(ii p1, ii p2){
	if( p1.first > p2.first) return 0;
	else if(p1.first < p2.first) return 1;
	
	return p1.second > p2.second;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(2);
	

	string line;
	int i, chara;

	cin >> line;
	while(1){

		map< int, int > hash;
		map<int,int>::iterator it;
		for(i = 0; i < line.length(); i++){
			chara = line.at(i);			
			if(hash.find(chara) == hash.end())
				hash.insert(ii(chara, 0));
			hash[chara]++;
		}	

		vii tuples;
		for(it = hash.begin(); it != hash.end(); it++){
			tuples.push_back(ii(it->second, it->first));
		}
		sort(tuples.begin(), tuples.end(), mySort);

		for(i = 0; i < tuples.size(); i++)
			cout << tuples[i].second << " " << tuples[i].first << "\n";
		if(cin >> line)
			cout << "\n";
		else break;
	}
	return 0;
}