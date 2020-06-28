#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, good, row, col, rowA, colA, threeR, threeC;
    char grid[25][25];

    cin >> n;
    for(i = 0; i < n; i++){
    	for(j = 0; j < n; j++){
    		cin >> grid[i][j];
    	}
    }

    good = 1;
    col = 0;
    row = 0;
    threeC = 0;
    threeR = 0;
    for(i = 0; i < n; i++){
    	if(i > 0){
    		if(grid[i][0] == grid[i - 1][0] && threeR == 0) 
    			threeR = 2;
    		else if(grid[i][0] == grid[i - 1][0]){
    			threeR = 3;
    			good = 0;
    		}
    		else threeR = 0;

    		if(grid[0][i] == grid[0][i - 1] && threeC == 0) 
    			threeC = 2;
    		else if(grid[0][i] == grid[0][i - 1]){
    			threeC = 3;
    			good = 0;
    		}
    		else threeC = 0;

    	}
    	if(grid[i][0] == 'B') row++;
    	if(grid[0][i] == 'B') col++;
    }

    if(good){
    	for(j = 1; j < n; j++){
	    	threeC = 0;
	    	threeR = 0;
	    	rowA = 0;
	    	colA = 0;
	    	for(i = 0; i < n; i++){
		    	if(i > 0){
		    		if(grid[i][j] == grid[i - 1][j] && threeR == 0) 
		    			threeR = 2;
		    		else if(grid[i][j] == grid[i - 1][j]){
		    			threeR = 3;
		    			good = 0;
		    			break;
		    		}
		    		else threeR = 0;

		    		if(grid[j][i] == grid[j][i - 1] && threeC == 0) 
		    			threeC = 2;
		    		else if(grid[j][i] == grid[j][i - 1]){
		    			threeC = 3;
		    			good = 0;
		    			break;
		    		}
		    		else threeC = 0;
		    	}
		    	if(grid[i][j] == 'B') rowA++;
	    		if(grid[j][i] == 'B') colA++;
	    	}
	    	if(rowA != row || colA != col){
	    		good = 0;
	    	}
	    	if(good == 0) break;
    	}
    	cout << good << "\n";
    }
    else{
    	cout << good << "\n";
    }

}
