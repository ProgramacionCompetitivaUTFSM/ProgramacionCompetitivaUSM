#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    int A,B,cant;
    cin >> A >> B;
    cant = 0;
    while(1){
        if(A <= B){
            cout << cant + B-A << "\n";
            break;
        }
        else{
            if(A%2 ==0){
                A /= 2;
                cant += 1;
            }
            else{
                A += 1;
                A /= 2;
                cant += 2;
            }
        }
    }
    
    return 0;
}