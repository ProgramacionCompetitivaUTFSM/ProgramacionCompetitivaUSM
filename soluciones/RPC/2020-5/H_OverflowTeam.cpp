#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	scanf("%d",&n);
	n *= 2;
	stack<int> cola, colaAux;
	
	for(int a = 0; a < n; a++){
		int t;
		scanf("%d",&t);
		cola.push(t);
	}
	
	long int movs = 0;
	//printf("a ehile\n");
	
	while(!cola.empty()){
		/*if(colaAux.empty()){
			//printf("vacia\n");
			colaAux.push(cola.top());
			cola.pop();
			movs++;
		}*/
		if(!cola.empty()){
			colaAux.push(cola.top());
			cola.pop();
			movs++;
		}
		while(!cola.empty() && !colaAux.empty() && cola.top() == colaAux.top()){
			//printf("iguales\n");
			movs++;
			cola.pop();
			colaAux.pop();
		}
		
		
	}
	
	if(cola.empty() && colaAux.empty()) printf("%ld\n",movs);
	else printf("impossible\n");
	
	return 0;
}
