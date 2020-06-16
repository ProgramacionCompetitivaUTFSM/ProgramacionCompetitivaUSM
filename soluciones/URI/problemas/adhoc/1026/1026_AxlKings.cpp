#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int resp, n1,n2,i;
    string bin1, bin2;
    while(cin >> n1){
        cin >> n2;
        if(n1 == 0){
            cout << n2 << "\n";
            continue;
        }
        else if(n2 == 0){
            cout << n1 << "\n";
            continue;
        }
        bin1 = "";
        bin2 = "";
        while(1){
            if(n1%2 == 0){
                n1 = n1/2;
                bin1 = "0" + bin1;
            }
            else{
                n1 = (n1-1)/2;
                bin1 = "1" + bin1;
            }
            if(n1 == 0){
                break;
            }
        }
        while(1){
            if(n2%2 == 0){
                n2 = n2/2;
                bin2 = "0" + bin2;
            }
            else{
                n2 = (n2-1)/2;
                bin2 = "1" + bin2;
            }
            if(n2 == 0){
                break;
            }
        }
        resp = 0;
        if(bin1.length() > bin2.length()){
            i = 0;
            while(i < bin2.length()){
                if(bin1[bin1.length()-i-1] != bin2[bin2.length()-i-1]){
                    resp += pow(2,i);
                }
                i++;
            }
            while(i < bin1.length()){
                if(bin1[bin1.length()-i-1] =='1'){
                    resp += pow(2,i);
                }
                i++;
            }
        }
        else{
            i = 0;
            while(i < bin1.length()){
                if(bin1[bin1.length()-i-1] != bin2[bin2.length()-i-1]){
                    resp += pow(2,i);
                }
                i++;
            }
            while(i < bin2.length()){
                if(bin2[bin2.length()-i-1] == '1'){
                    resp += pow(2,i);
                }
                i++;
            }
        }
        cout << resp << "\n";
    }
    return 0;
}