#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i, j, r1, r2, n, power;
    cin >> r1 >> r2;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> power;
        if(power <= 1000){
            cout << power << " " << power*r1 << "\n";
        }
        else{
            cout << power << " " << 1000*r1+(power-1000)*r2 << "\n";
        }
    }
    return 0;
}