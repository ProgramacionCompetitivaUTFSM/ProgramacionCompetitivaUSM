#include<bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> parLarg;
typedef vector< vector< parLarg > > graph; 

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	int n, m;
	cin >> n >> m;

	vector<vector<pair< int, int>>> graph(n + 1);
	long long a, b, w, u, d, l, v, w2;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		graph[a-1].push_back(parLarg(b - 1, 1));
		graph[b-1].push_back(parLarg(a - 1, 1));			
	}

	vector<long long> encuantollego(n, 1000000000); 
	encuantollego[0] = 0;
	priority_queue<parLarg, vector<parLarg>, greater<parLarg>> pQueue;
	pQueue.push(parLarg(0,0));
	while(!pQueue.empty()){
		w2 = pQueue.top().first;
		u = pQueue.top().second;
 
		pQueue.pop();
 
		if(w2 > encuantollego[u]) continue;
		if(u == n-1) break;
 
		for(int i = 0; i < graph[u].size(); i++){
			v = graph[u][i].first;
			l = graph[u][i].second;
 
			if(w2 + l < encuantollego[v]){
				encuantollego[v] = w2+l;
				pQueue.push(parLarg(w2+l,v));
			}
		}
	}
	cout << encuantollego[n - 1] - 1<< "\n";
	
}