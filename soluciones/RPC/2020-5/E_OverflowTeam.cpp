#include<bits/stdc++.h>
using namespace std;
int main(){
    int N; scanf("%d", &N);
    int vecesPar = 0;
    //Par
    int sum = 0;
    for(int i = 2; i < N+2; i++){

        sum+=i;
    }
    if(sum % 2 == 0){
        vecesPar++;
    }
    sum = 0;
    for(int i = 1; i < N+1; i++){

        sum+=i;
    }
    if(sum % 2 == 0){
        vecesPar++;
    }
    if(vecesPar == 2){
        printf("Even\n");
    }else if(vecesPar == 1){
        printf("Either\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}