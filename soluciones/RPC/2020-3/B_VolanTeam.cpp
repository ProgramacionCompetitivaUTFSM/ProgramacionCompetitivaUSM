#include<bits/stdc++.h>
using namespace std;

struct Node {
    int id;
    int time;
    bool operator < (const Node &n2) {
        return time>n2.time;
    }
} a[400005];

vector<int> G[400005];
int times[400005];
bool vis[400005];
int res = -10000000;
int extra = 0;

void dfs(int x) {

    if(vis[x]) return;
    if(G[x].size()==0) {
        res=max(res,extra+times[x]);
        extra++;
        vis[x]=true;
        return;
    }
 
    vis[x]=true;
    for(int i=0; i<G[x].size(); i++)
        dfs(G[x][i]);
 
    res=max(res,extra+times[x]);
    extra++;
}

int main() {
    int n; cin >> n;
    memset(vis,false,sizeof(vis));

    for(int i=0; i<=n; i++) G[i].clear();
    for(int i=1; i<=n; i++) {
		cin >> a[i].time;
        a[i].id=i;
        times[i]=a[i].time;
        int num;
        cin >> num;
        while(num--) {
            int x;
            cin >> x;
            G[i].push_back(x);
        }
    }

    sort(a+1,a+n+1);
    for(int i=1; i<=n; i++) {
        if(vis[a[i].id])
        	continue;
        dfs(a[i].id);
    }

    cout << res << '\n';
    return 0;
}