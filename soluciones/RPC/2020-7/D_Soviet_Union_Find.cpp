#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector< vi > graph;
typedef vector< vii > graphw;

int main() {
    long long int i, j, n, cd_len, playlist_len, ans, delta1, delta2;
    cin >> n;
    for(i = 0; i < n; i++){
        ans = 0;
        cin >> cd_len >> playlist_len;
        vi songs(playlist_len);
        cin >> songs[0];
        for(j = 1; j < playlist_len; j++){
            cin >> songs[j];
            if(songs[j-1] < songs[j]){
                delta1 = songs[j] - songs[j-1] - 1;
                delta2 = songs[j-1] + cd_len - songs[j] + 1;
                ans += (delta1 <= delta2)? delta1 : delta2;
            }
            else if(songs[j-1] > songs[j]){
                delta1 = songs[j-1] - songs[j] + 1;
                delta2 = songs[j] + cd_len - songs[j-1] - 1;
                ans += (delta1 <= delta2)? delta1 : delta2;
            }
            else{
                ans += 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}