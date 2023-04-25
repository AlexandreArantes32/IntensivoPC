#include<bits/stdc++.h>

using namespace std;

const int N =1e5 + 3;
vector<int> v[N];
bool vis[N];
int dist[N];

int maiorDist,ponta;

void bfs(int a){
    vis[a]=true;
    queue<int> q;
    q.push(a);
    maiorDist = -1;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            if( !vis[v[x][i]] ){
                vis[v[x][i]] = true;
                dist[ v[x][i] ] = 1 + dist[x];
                q.push(v[x][i]);
                if( dist[ v[x][i] ] > maiorDist ){
                    ponta = v[x][i];
                    maiorDist = dist[ v[x][i] ];
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a;
    while(n--){
        cin>>a;
        for(int i=0;i<a;i++){
            v[i].clear();
            vis[i]=false;
            dist[i]=0;
        }
        for(int i=1;i<a;i++){
            int b,c;
            cin>>b>>c;
            v[b].push_back(c);
            v[c].push_back(b);
        }
        bfs(0);

        for(int i =0;i<a;i++){
            vis[i]=false;
            dist[i]=0;
        }

        bfs(ponta);
        cout<< ((maiorDist +1)/2) <<"\n";
    }
    return 0;
}