#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
	
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4); 
    int T;
    ll n, k, freq, i;
    string palabrita;

    cin >> T;
    while(T--){
    	priority_queue<pll, vector<pll>, greater<pll>> pq;
	    map<ll, ll> mapita;
	    map<ll, string> mapita2;
    	cin >> n >> k;
    	i = 0;
    	while(n > i){
    		cin >> palabrita >> freq;
    		pq.push(pll(freq,i));
    		mapita[i] = freq;
    		mapita2[i] = palabrita;
    		i += 1;
    	}
    	while(k--){
    		i = pq.top().second;
    		freq = pq.top().first;

    		cout << freq << " " << mapita2[i] << "\n";
    		pq.pop();
    		pq.push(pll(freq + mapita[i], i));
    	}
    }
    return 0; 
} 
