#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.setf(ios::fixed);
	cout.precision(5);

	long long t, cds[1005][11], dp[1005][11], pres, next, dist, res;
    int s, n; cin >> t>> s;

    for(int i = 1; i <= s; i++)
    {
        cin >> n; cds[i][0] = n;
        if(i == 1)	cds[0][0] = 1;
        
        for(int j = 1; j <= n; j++)
        {
            cin >> cds[i][j];
            pres = 0xffffffffffffff; // inf feo xd
            for(int k = 1; k <= cds[i - 1][0]; k++)
            {
            	next = cds[i - 1][k];
            	dist = 0;

            	if(next == t)				next = 0;
            	if(next + 1 == cds[i][j]) 	dist = 0;
            	if(next + 1 < cds[i][j]) 	dist = min(cds[i][j] - next - 1, next + 1 - cds[i][j] + t);
            	if(next + 1 > cds[i][j]) 	dist = min(next + 1 - cds[i][j], cds[i][j] - next - 1 + t);

                pres = min(pres, dp[i - 1][k] + dist);
            }

            dp[i][j] = pres;
        }
    }

    res = dp[s][1];

    for(int i = 1; i <= cds[s][0]; i++)
    	res = min(res, dp[s][i]);
    
    cout << res << '\n';
	return 0;
}

/*
12 5
2 5 7
2 5 7
3 12 2 4
1 9
2 4 5
*/