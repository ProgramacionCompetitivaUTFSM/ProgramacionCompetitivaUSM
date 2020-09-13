#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i, j, n, miles, gas, food, g, f, stop = 0, aux;
    cin >> miles >> gas >> food;
    bool flag = true;
    g = gas;
    f = food;
    while(flag){
        aux = min(g,f);
        miles -= aux;
        g -= aux;
        f -= aux;
        if(miles <= 0){
            break;
        }
        stop++;
        if(g == 0){
            g = gas;
        }
        if(f == 0){
            f = food;
        }
    }
    cout << stop << "\n";
    return 0;
}