#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int r1, r2;
    cin >> r1 >> r2;

    int T;
    cin >> T;
    while(T--){
        int E, C;
        cin >> E;
        cout << E << " ";

        C = 0;
        if(E > 1000) cout << (E-1000)*r2 + 1000*r1 << endl;
        else cout << E*r1 << endl;
    }
    
    return 0;
}