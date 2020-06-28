#include<bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	scanf("%d",&n);
	
	char maze[n][n];
	
	bool valid = true;
	int count = 0,bcount = 0, wcount = 0;
	char before = ' ';
	
	for(int a = 0; a <n; a++){
		for(int b = 0; b < n; b++){
			scanf("%c",&maze[b][a]);
			if(maze[b][a] == '\n'){
				--b;
				continue;
			}
			//printf("%c",maze[b][a]);
			if(maze[b][a] == 'W') wcount++;
			if(maze[b][a] == 'B') bcount++;
			if(maze[b][a] == before) count++;
			else count = 1;
			if(count == 3) {
			valid = false;
			//printf("	falso por 3\n");
			}
			before = maze[b][a];
		}
		if(bcount != wcount) {
		valid = false;}
		//printf("	falso por count h w%d b%d\n",wcount,bcount);}
		count = 0; bcount = 0; wcount = 0; before = ' ';
	}
	
	for(int a = 0; a <n; a++){
		for(int b = 0; b < n; b++){
			if(maze[a][b] == 'W') wcount++;
			else bcount++;
			if(maze[a][b] == before) count++;
			else count = 1;
			if(count == 3) valid = false;
			before = maze[a][b];
		}
		if(bcount != wcount) {
		valid = false;}
		//printf("	falso por count h w%d b%d\n",wcount,bcount);}
		count = 0; bcount = 0; wcount = 0; before = ' ';
	}
	
	printf("%d\n",valid);
	
	return 0;
}
