#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	scanf("%d",&n);
	
	int tb=0,db=0;
	int maxi = 0;
	
	for(int a = 0; a < n; a++){
		int t,d;
		scanf("%d %d",&t,&d);
		if(a == 0) continue;
		maxi = max((d-db)/(t-tb),maxi);
		tb = t; db = d;
	}
	
	printf("%d\n",maxi);
	
	
	return 0;
}
