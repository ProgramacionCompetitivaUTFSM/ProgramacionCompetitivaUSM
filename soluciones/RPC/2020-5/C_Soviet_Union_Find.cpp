#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i,j,k,m,n,R,C,A,B,sumA = 0,sumB = 0, aux;
    cin >> R >> C >> A >> B;
    vi ai;
    vi bi;
    for(i = 0; i < A; i++){
        cin >> aux;
        //cout << "a" << i << ":" << aux << " ";
        ai.push_back(aux);
    }
    //cout << "\n";
    for(i = 0; i < B; i++){
        cin >> aux;
        //cout << "b" << i << ":" << aux << " ";
        bi.push_back(aux);
    }
    //cout << "\n";
    vector<vector<char>> grid(R);
    for(i = 0; i < R; i++){
        for(j = 0; j < C; j++){
            grid[i].push_back('o');
        }
    }
    //cout << "R:" << R << " C:" << C << " A:" << A << " B:" << B << "\n";
    for(i = 0; i < A; i++){
        //cout << "xd\n";
        for(j = 0; j < B; j++){
            //cout << ai[i] << "\n";
            for(k = 0; k < ai[i]; k++){
                //cout << "xd3\n";
                for(m = 0; m < bi[j]; m++){
                    //cout << "Cuadrante (" << ai[i] << "," << bi[j] << ")\n";  
                    if((i+j)%2 == 0){
                        grid[sumA+k][sumB+m] = 'B';
                    }
                    else{
                        grid[sumA+k][sumB+m] = 'W';
                    }
                }
            } 
            sumB += bi[j];
        }
        sumA += ai[i];
        sumB = 0;
    }
    for(k = 0; k < R; k++){
        for(m = 0; m < C; m++){
            cout << grid[k][m];
        }
        cout << "\n";
    } 
    
    return 0;
}