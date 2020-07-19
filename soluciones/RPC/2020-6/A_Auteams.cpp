#include <bits/stdc++.h>
using namespace std;
int main(){
  string first,temp;
  int n,tampalabras,tampalabrasresultado;
  cin >> first;
  cin >>n;
  char ultimaletra;
  vector<string> palabras,palabrasresultado,final1,final2;
  bool flag;
  ultimaletra = first.back();
  for(int i=0;i<n;i++){
      cin >> temp;
      if (temp[0]==ultimaletra){
          palabrasresultado.push_back(temp);
      }
      palabras.push_back(temp);
  }
  
  if (palabrasresultado.size()==0){
    cout << "?" << endl;
  }
  else{
    tampalabrasresultado= palabrasresultado.size();
    tampalabras= palabras.size();
    for(int z=0;z<tampalabrasresultado;z++){
        flag=true;
        
        for(int x=0;x<tampalabras;x++){
            if (palabrasresultado[z]!=palabras[x]){
                if (palabrasresultado[z].back()==palabras[x][0]){
                    flag=false;
                }  
            }
        } 
            if (flag){
                final1.push_back(palabrasresultado[z]);
                break;
            }    
            else{
                final2.push_back(palabrasresultado[z]);
            }
        }
        if (final1.size()==0){
          cout << final2[0]<< endl;
      }
        else{
          cout << final1[0] <<"!"<<endl;
          break;
      }
  }
  return 0;
}
