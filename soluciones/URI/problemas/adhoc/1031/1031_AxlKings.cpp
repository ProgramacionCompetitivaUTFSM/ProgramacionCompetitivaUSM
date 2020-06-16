#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int cont,i,n,m, muertos;
    bool flag;
    vector <int> regiones(100);
    
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        else if(n == 13){
            cout << 1 << "\n";
            continue;
        }
        m = 5;
        regiones[0] = 0;
        while(1){
            muertos = 1;
            //cout << "El m a probar es: " << m << "\n";
            for(i = 1; i < n; i++){
                regiones[i] = 1;
            }
            i = 0;
            flag = false;
            while(1){
                cont = 0;
                while(1){
                    if(regiones[i] == 1){
                        cont++;
                        //cout << i+1 << "\n";
                    }
                    if(cont == m){
                        break;
                    }
                    i++;
                    if(i == n){
                        i = i%n;
                    }
                }
                if(i == 12){
                    if(muertos == n-1){
                        flag = true;
                    }
                    break;
                }
                else{
                    regiones[i] = 0;
                    //cout << "Mato al " << i+1 << "\n";
                    muertos++;
                }
            }
            if(flag){
                break;
            }
            m++;
        }
        cout << m << "\n";
    }
    return 0;
}