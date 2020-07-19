#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i, j, n, pos = -1, minimo = 41, maximoPrev = 41, maximoAct = -21;

    cin >> n;
    int t[n];
    for(i = 0; i < n; i++){
        cin >> t[i];
    }

    for(i = 0; i < n-2; i++){
        maximoAct = max(t[i],t[i+2]);
        if(maximoAct < maximoPrev){
            maximoPrev = maximoAct;
            pos = i;
        }
    }
    cout << pos+1 << " " << maximoPrev << "\n";
    return 0;
}