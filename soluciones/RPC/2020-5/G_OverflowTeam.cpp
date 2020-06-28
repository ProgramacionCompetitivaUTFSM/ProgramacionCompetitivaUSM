#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

int main(){
    int c = 0;
    cin >> c;


    int t1 = 0;
    int t2 = 0;

    int i = 2018;
    int j = 4;

    if (c == 2018){
        cout << "yes" << endl;
        return 0;
    }
    while(i < c){
        t1 = i + 2;
        t2 = j + 2;
        if (t2 > 12){
            t2 = t2 - 12;
            t1++;
        }
        //cout << t1 << " " << t2 << endl;

        i = t1;
        j = t2;

        if(i == c){
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;

    return 0;
}