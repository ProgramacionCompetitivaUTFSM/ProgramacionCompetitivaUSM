#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int n,i,v = 0, t,d,t2,d2,v2;
    cin >> n;
    cin >> t >> d;
    for(i = 1; i < n; i++){
        cin >> t2 >> d2;
        v2 = (d2-d)/(t2-t);
        if( v2 > v){
            v = v2;
        }
        t = t2;
        d = d2;
    }
    cout << v << "\n";
    return 0;
}