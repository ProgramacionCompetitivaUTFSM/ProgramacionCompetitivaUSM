#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int y;
    cin >> y;
    if(y == 2018){
        cout << "yes\n";
    }
    else if(26-(((y-2018)*12)%26) <= 8 || ((y-2018)*12)%26 < 4 ){
        cout << "yes\n";
    }
    else{
        cout << "no\n";
    }
    return 0;
}