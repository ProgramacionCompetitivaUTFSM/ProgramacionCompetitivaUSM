#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, topo, topa, move;
	cin >> n;
	vector< int > calcetine(2 * n + 1);
	for(i = 0; i < 2 * n; i++) cin >> calcetine[i];


	stack< int > original;
	stack< int > auxiliary;

	for(i = 2 * n - 1; i >= 0; i--) original.push(calcetine[i]);

	move = 0;
	while(1){
		if(auxiliary.empty()){
			topo = original.top();
			auxiliary.push(topo);
			original.pop();
			move++;
		}
		else{
			topo = original.top();
			topa = auxiliary.top();

			if(topo == topa){
				original.pop();
				auxiliary.pop();
				move++;
			}
			else{
				auxiliary.push(topo);
				original.pop();
				move++;
			}
		}

		if(auxiliary.empty() && original.empty()){
			break;
		}
		else if(original.empty()){
			move = -1;
			break;
		}
	}

	if(move == -1) cout << "impossible\n";
	else cout << move << "\n";
	return 0;
}