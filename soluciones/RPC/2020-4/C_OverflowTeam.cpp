#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	vector<vi> grafo(n,vi());
	vi distancia(n,1e9+1);
	
	for(int a = 0; a < m; a++){
		int x,y;
		scanf("%d %d",&x,&y);
		grafo[x-1].push_back(y-1);
		grafo[y-1].push_back(x-1);
	}
	
	queue<int> cola;
	cola.push(0);
	distancia[0] = 0;
	
	while(!cola.empty()){
		int nodo = cola.front();
		cola.pop();
		
		for(int a = 0; a < grafo[nodo].size(); a++){
			int des = grafo[nodo][a];
			if(distancia[nodo]+1 < distancia[des]){
				distancia[des] = distancia[nodo]+1;
				cola.push(des);
			}
		}
	}
	
	printf("%d\n",distancia[n-1]-1);
	
	
	return 0;
}
