#include <bits/stdc++.h>
using namespace std;

double distancia(double x,double z,double y){
  return(sqrt(x*x+z*z+y*y));
}
int main(){
  int n,k;
  double x,y,z,ftemp;
  vector <double> distancias;
  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> x >> y >> z;
    ftemp =distancia(x,z,y);
    distancias.push_back(ftemp);
  }
  sort(distancias.begin(),distancias.end());
  printf("%.8f",distancias[k-1]);
  return 0;
}