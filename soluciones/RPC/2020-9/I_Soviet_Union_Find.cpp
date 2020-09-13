#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i,x,y, j, n, cont = 0, total = 0, izq = 1000000, der = -1000000, abajo = 1000000, arriba = -1000000, x1, y1, x2, y2;
    cin >> n;
    while(n--){
        cin >> x2 >> y2;
        if(cont != 0){
            total += sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        }
        else{
            x = x2;
            y = y2;
        }
        cont++;
        if(x2 < izq){
            izq = x2;
        }
        else if(x2 > der){
            der = x2;
        }
        if(y2 < abajo){
            abajo = y2;
        }
        else if(y2 > arriba){
            arriba = y2;
        }
        x1 = x2;
        y1 = y2;
    }
    total += sqrt((x-x2)*(x-x2) + (y-y2)*(y-y2));
    cout << total - ((der-izq)*2+(arriba-abajo)*2) << "\n";
    return 0;
}