#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265

int main() {
   int t;
   cin >> t;
   while(t--){
      double w, b, d, s;

      cin >> w >> b >> d >> s;

      int tiros, points;
      cin >> tiros;
      points = 0;
      while(tiros--){
         double x, y, dist, angulo;
         cin >> x >> y;
         dist = sqrt(x * x + y * y);
         if(dist < b){
            points += 50;
            //cout << "50! " << x << " " << y << "\n";
         }
         else{
            //      a       b     c
            double dist1, dist2, dist3;
            dist1 = dist;
            dist2 = s;
            dist3 = sqrt((x - (s)) * (x - (s)) + y * y);

            //cos(angulo) = (a**2 + b**2 - c**2)/2ab
            angulo = acos((dist1 * dist1 + dist2 * dist2 - dist3 * dist3) / (2 * dist1 * dist2)) * 180 / PI;
            angulo = trunc(angulo / (360.0 / w)) + 1;

            if(y < 0){
               angulo = w - angulo + 1;
            }
            if(dist < d)
               points += angulo * 2;
            else if(dist < s) points += angulo;
         }
      }
      cout << points << "\n";
   }
   return 0;
}