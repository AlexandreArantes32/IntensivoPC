#include<bits/stdc++.h>

using namespace std;
int v[5006];


int dfs(int a , int x){
    if(x==2){
        return v[a-1];
    }
    return dfs( v[a-1] ,x+1);

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i]=a;
    }

    for(int i=0;i<n;i++){
        int x = dfs(v[i],1);
        if( (i+1) == x ){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}