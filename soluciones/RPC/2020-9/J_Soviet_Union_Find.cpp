#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n){
    long long prod = 1;
    for(long long i = 2; i <= n; i++){
        prod *= i;
    }
    return prod;
}

/*
long long permute(long long n){
    long long xd2 = factorial(n-2);
    long long xd = xd2*(n-1)*n;
    cout << xd2 << "\n";
	return xd/xd2;
}*/

int main(){
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.setf(ios::fixed);

    long long sum = 0;
    int arr[200];
    string input;
    long long n;
    for(int i = 60; i < 92; i++){
        arr[i] = 0;
    }

    cin >> n;
    while(n--){
        cin >> input;
        arr[(input[0])]++;
    }
    for(int i = 65; i < 91; i++){
        if(arr[i] != 0 and arr[i] != 1){
            cout << arr[i] << "\n";
            sum += arr[i]*(arr[i]-1);
        }
    }
    cout << sum;
    return 0;
}