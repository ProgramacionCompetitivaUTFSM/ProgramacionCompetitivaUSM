#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int T;
    cin >> T;

    while(T--){
        double w, b, d, s;
        cin >> w >> b >> d >> s;

        vector<double> vec{b,d,s};
        sort(vec.begin(), vec.end());

        b = vec[0];
        d = vec[1];
        s = vec[2];

        double w_ang = 2*PI/w;

        int t;
        cin >> t;

        int score = 0;
        while(t--){
            double x, y;
            cin >> x >> y;

            double theta = atan2(y, x);
            if(theta < 0) theta += 2*PI;

            double r = sqrt(x*x + y*y);
            int wedge = theta/w_ang + 1;


            int scr = 0;
            if(r > s) scr = 0;
            else if(r > d) scr = wedge;
            else if(r > b) scr = 2*wedge;
            else scr = 50;

            score += scr;
        }
        cout << score << endl;
    }
    
    return 0;
}