#include<bits/stdc++.h>
using namespace std;

int m[21][31];
int deliver[21];
int weigth[21];

int knapSack(int W, int n){
	int i, w;

	for(i = 0; i <= n; i++){
		for(w = 0; w <= W; w++){
			if(i == 0 || w == 0)
				m[i][w] = 0;
			else if(weigth[i - 1] <= w)
				m[i][w] = max(deliver[i - 1] + m[i - 1][w - weigth[i - 1]], m[i - 1][w]);
			else
				m[i][w] = m[i - 1][w];
		}
	}
	return m[n][W];
}

int main(){
	int n, p, i;

	cin >> n;
	while(n != 0){
		cin >> p;
		for(i = 0; i < n; i++)
			cin >> deliver[i] >> weigth[i];

		cout << knapSack(p, n) << " min.\n";
		cin >> n;
	}
	return 0;
}