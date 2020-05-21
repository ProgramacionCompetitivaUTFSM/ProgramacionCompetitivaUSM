#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(4);
	int n, i;

	cin >> n;
	while(n != 0){
		queue< int > colita;
		vector< int > discarded;
		for(i = 1; i <= n; i++)
			colita.push(i);
		while(colita.size() > 1){
			discarded.push_back(colita.front());
			colita.pop();
			i = colita.front();
			colita.pop();
			colita.push(i);
		}
		cout << "Discarded cards: ";
		for(i = 0; i < discarded.size() - 1; i++){
			cout << discarded[i] << ", ";
		}
		cout << discarded[i] << "\n";
		cout << "Remaining card: " << colita.front() << "\n";
		cin >> n;
	}
	return 0;
}