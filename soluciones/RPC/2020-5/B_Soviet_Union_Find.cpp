#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i,j,n;
    cin >> n;
    vector<vector<char>> grid(n);
    
    string line;
    int black, white, contB, contW;
    for(i = 0; i < n; i++){
        cin >> line;
        black = 0;
        white = 0;
        contB = 0;
        contW = 0;
        for(j = 0; j < n; j++){
            //cout << line[j] << "\n";
            grid[i].push_back(line[j]);
            if(line[j] == 'W'){
                white++;
                contW++;
                contB = 0;
            }
            else{
                black++;
                contB++;
                contW = 0;  
            }
            if(contW == 3 || contB == 3){
                cout << 0 << "\n";
                exit(0);
            }
        }
        if(black != white){
            cout << 0 << "\n";
            exit(0);
        }
    }


    for(j = 0; j < n; j++){
        black = 0;
        white = 0;
        contB = 0;
        contW = 0;
        for(i = 0; i < n; i++){
            if(grid[i][j] == 'W'){
                white++;
                contW++;
                contB = 0;
            }
            else{
                black++;
                contB++;
                contW = 0;
            }
            if(contW == 3 || contB == 3){
                cout << 0 << "\n";
                exit(0);
            }
        }
        if(black != white){
            cout << 0 << "\n";
            exit(0);
        }
    }
    cout << 1 << "\n";
    return 0;
}