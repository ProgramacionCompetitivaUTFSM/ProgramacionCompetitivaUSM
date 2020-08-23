#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    long long t, s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << (s + 1) * (s + 1) - 1 << "\n";
    }
    return 0; 
} 