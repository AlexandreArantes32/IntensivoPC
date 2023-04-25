#include<bits/stdc++.h>

using namespace std;

const int N = 102;
vector<int> v[N];
bool vis[N];
int ans;

void bfs(int a ){
    queue<int> q;
    q.push(a);
    while( !q.empty() ){
        int x = q.front();
        q.pop();
        vis[x]=true;
        for(int i=0; i<v[x].size(); i++){
            if( !vis[ v[x][i] ] ){
                vis[v[x][i]] = true;
                q.push(v[x][i]);
            }
        }
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    ans = 0;
    for(int i=1;i<=n;i++){
        if( !vis[i] ){
            bfs(i);
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}