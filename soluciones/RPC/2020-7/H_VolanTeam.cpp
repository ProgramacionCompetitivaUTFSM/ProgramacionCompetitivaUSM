#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void log(int* l, int a, int b) {
	for (int i = a; i <= b; ++i)
	{
		cout << l[i] << " ";
	}
	cout << '\n';
}

int main(int argc, char const *argv[])
{
	int l[150], s[150][150], res[150][150];
    int t, n, x; 
    vi q;
    cin >> t;

    while(t--) {
    	cin >> n;

    	for (int i = 1; i <= n; ++i) {
    		cin >> x;
    		l[i] = x;
    	}

    	for (int i = 1; i <= n; ++i) {
    		q.clear();
    		for (int j = i; j <= n; ++j) {
    			if(q.empty() || l[j] > q.back()) {
    				q.push_back(l[j]);
				}
				else {
					auto elem = lower_bound(q.begin(), q.end(), l[j]);
					*elem = l[j];
				}

				s[i][j] = q.size();
    		}
    	}

    	for (int k = 1; k <= n; ++k) {
    		for (int i = 1; i <= n; ++i) {
	    		res[k][i] = 0;
    			for (int j = 1; s[j][i] >= k; ++j) {
    				res[k][i] = max(res[k][i], res[k][j - 1] + s[j][i]);
    			}
    		}
    	}

    	cout << res[1][n];
    	for (int i = 2; i <= n; ++i) {
    		cout << " " << res[i][n];
    	}
    	cout << '\n';
    }

	return 0;
}