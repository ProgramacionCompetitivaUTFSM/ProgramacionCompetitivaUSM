#include<bits/stdc++.h>

using namespace std;
int main(){
	long long n, c, pesosActual, cant, w, i, j, posfinal;
	cin >> n >> c;
	vector< long long > pesos(n);
	for(int i = 0; i < n; i++) cin >> pesos[i];
	
	sort(pesos.begin(), pesos.end());

	int head = 0;
	int tail = n - 1;

	cant = 0;
	if(n != 1){
		while(head <= tail){
			if(head != tail){
				if(pesos[head] + pesos[tail] <= c){
					cant++;
					head++;
					tail--;
				}
				else{
					cant++;
					tail--;
				}
			}
			else{
				cant++;
				head++;
			}
		}
		cout << cant << "\n";
	}
	else cout << 1 << "\n";
	return 0;
}