#include <bits/stdc++.h>
using namespace std;

typedef vector<long long int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    //cout.precision(4);
    long long int i, n, S;
    
    //mini = 1000000000+1;
    //maxi = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        //if(S in ans):
        //    cout << ans[S] << "\n";
        cin >> S;
        cout << ((S+1)*(S+1))-1 << "\n";
    }
    return 0;
}