#include <bits/stdc++.h>
using namespace std;

int main() {
   int r1000, r1001, c, consum, cost;

   cin >> r1000 >> r1001;
   cin >> c;
   while(c--){
      cin >> consum;

      cout << consum << " ";
      if(consum <= 1000) cout << consum * r1000 << "\n";
      else cout << 1000 * r1000 + (consum - 1000) * r1001 << "\n";
   }
   return 0;
}