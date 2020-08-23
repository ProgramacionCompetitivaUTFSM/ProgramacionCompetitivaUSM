#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> parLarg;

int between(double i, double j, double k){
	if(i < j){
		if(i <= k && j >= k){
			return 1;
		}
	}
	else{
		if(i >= k && j <= k){
			return 1;
		}
	}
	return 0;
}

int main() {
	long long n, x, y, i, j, k, flag, sameX, sameY;
	double m, b;

	cin >> n;
	vector< pair< double, double > > team1(n);
	vector< pair< double, double > > team2(n);
	vector< vector < parLarg > > graph(n);

	i = 0;
	while(n > i){
		cin >> x >> y;
		team1[i].first = x;
		team1[i].second = y;
		i++;
	}

	i = 0;
	while(n > i){
		cin >> x >> y;
		team2[i].first = x;
		team2[i].second = y;
		i++;
	}

	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			flag = 1;
			sameX = sameY = 0;
			if(team1[j].first == team1[i].first){
				sameX = 1;
			}
			else{
				m = (team1[j].second - team1[i].second) / (team1[j].first - team1[i].first);
				b = team1[i].second - m * team1[i].first;
			}
			
			for(k = 0; k < n; k++){
				if(sameX == 0){
					if(abs(team2[k].second - (m * team2[k].first + b)) < 1.0 / 1000000.0){
						if(between(team1[i].first, team1[j].first, team2[k].first)){
							flag = 0;
							break;
						}
					}
				}
				else{
					if(team2[k].first == team1[i].first){
						if(between(team1[i].second, team1[j].second, team2[k].second)){
							flag = 0;
							break;
						}
					}
				}
			}

			for(k = 0; k < n; k++){
				if(k == i || k == j) continue;
				if(sameX == 0){
					if(abs(team1[k].second - (m * team1[k].first + b)) < 1.0 / 1000000.0){
						if(between(team1[i].first, team1[j].first, team1[k].first)){
							flag = 0;
							break;
						}
					}
				}
				else{
					if(team1[k].first == team1[i].first){
						if(between(team1[i].second, team1[j].second, team1[k].second)){
							flag = 0;
							break;
						}
					}
				}
			}
			
			if(flag){
				graph[i].push_back(parLarg(j, 1));
				graph[j].push_back(parLarg(i, 1));
			}
		}
	}

	long long v, l, w2, u;
	vector<long long> camino(n, -1);
	vector<long long> encuantollego(n, 100000); 
	encuantollego[0] = 0;
	priority_queue<parLarg, vector<parLarg>, greater<parLarg>> pQueue;
	pQueue.push(parLarg(0,0));
	while(!pQueue.empty()){
		w2 = pQueue.top().first;
		u = pQueue.top().second;
 
		pQueue.pop();
 
		if(w2 > encuantollego[u]) continue;
		if(u == n-1) break;
 
		for(long long i = 0; i < graph[u].size(); i++){
			v = graph[u][i].first;
			l = graph[u][i].second;
 
			if(w2 + l < encuantollego[v]){
				camino[v] = u;
				encuantollego[v] = w2+l;
				pQueue.push(parLarg(w2+l,v));
			}
		}
	}

	if(encuantollego[n - 1] == 100000) cout << -1 << "\n";
	else cout << encuantollego[n - 1] << "\n";

	/*
	for(i = 0; i < n; i++){
		cout << i << " -> ";
		for(j = 0; j < graph[i].size(); j++){
			cout << graph[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	return 0;
}