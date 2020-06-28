#include<bits/stdc++.h>
using namespace std;

map<char,int> encode(map<char,int> apCar){
    vector<pair<int,char>> frecuenciasOrdenadas;
    for(pair<char,int> p : apCar){
        frecuenciasOrdenadas.push_back(make_pair(p.second,p.first));
    }
    sort(frecuenciasOrdenadas.begin(),frecuenciasOrdenadas.end());
    map<char,int> lengthCaracteres;
    int numeroCaracter = 0;
    int valores[] = {1, 3, 3, 5, 5, 5 ,7, 7, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 11, 11 ,11 , 11, 11, 11, 11, 11, 11};
    for(int i = frecuenciasOrdenadas.size()-1; i >= 0; i--){
        pair<int,char> actual = frecuenciasOrdenadas[i];
        /*int puntos = numeroCaracter%3;
        int rayas = numeroCaracter/3;
        lengthCaracteres[actual.second] = 3*rayas+puntos+(rayas+puntos-1);*/
        lengthCaracteres[actual.second] = valores[numeroCaracter];
        numeroCaracter++;
    }
    return lengthCaracteres;


}
int main(){
    string s; getline(cin, s);
    map<char,int> apCar;
    int size = s.length();
    char actual;
    string sDef;
    for(int i = 0; i < size; i++){
        actual = s[i];
        if(!isalpha(actual)) continue;
        actual = toupper(actual);
        apCar[actual]+= 1;
        sDef+=actual;
    }
    map<char,int> codigo = encode(apCar);
    int largo = 0;
    size = sDef.length();
    for(int i = 0; i < size; i++){
        largo+=codigo[sDef[i]];
        if(i != size-1){
            largo+=3;
        }
    }
    printf("%d\n",largo);
    return 0;
}