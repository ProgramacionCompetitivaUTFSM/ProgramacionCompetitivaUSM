#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;

int main () {
	int n; cin >> n;
	int m; cin >> m;
	vector < vector <int> > graph (n);
	for (int i = 0; i < m; i++){
		int a, b; cin >> a >> b;
		a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	queue <pii> q;
	q.push(pii(0, 0));
	vector <bool> vis (n, false);
	int ans = 0;
	while(!q.empty()) {
		int node = q.front().first;
		int len = q.front().second;
		if (node == n-1) {
			ans = len;
			break;
		}
		q.pop();
		vis[node] = true;
		for(auto i : graph[node]){
			if (!vis[i])
				q.push(pii(i, len+1));
		}
	}
	cout << ans-1 << endl;
	return 0;
}