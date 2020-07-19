#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,pos;
  int temp,final1,min=41,maximo;
  cin >> n;
  vector<int> tem;
  for(int i=0;i<n;i++){
    cin >> temp;
    tem.push_back(temp);
  }
  for(int i=1;i<n-1;i++){
    maximo=max(tem[i-1],tem[i+1]);
    if(maximo<min){
      min = maximo;
      pos = i;
    }
  }
  cout << pos << " "<< min << endl;
  return 0;
}
