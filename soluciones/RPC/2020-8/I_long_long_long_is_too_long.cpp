#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(2);
    
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;

        vector<string> names(n);
        vector<int> times(n);
        vector<int> curr_time(n);

        for(int i = 0; i < n; i++){
            string name;
            int f;
            cin >> name >> f;
            names[i] = name;
            times[i] = f;
            curr_time[i] = f;
        }

        while(k>0){
            int mini = *min_element(curr_time.begin(), curr_time.end());
            for(int i = 0; i < n; i++){
                if(curr_time[i] != mini) continue;
                cout << curr_time[i] << ' ' << names[i] << '\n';
                curr_time[i] += times[i];
                k--;
                if(k <= 0) break;
            }
        }
    }
    
    return 0;
}