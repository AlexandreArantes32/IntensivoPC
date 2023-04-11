#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<int> v;
    for(int i=0;i<=m;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int aux ;

    for(int i=0;i<m;i++){
        aux=0;
        for(int j=0;j<n;j++){
            if( (v[m]&(1<<j)) != (v[i]&(1<<j))  ){
                aux++;
            }
        }
        //cout<<aux<<"\n";
        if(aux<=k){
            ans++;
        }
    }

    cout<<ans<<"\n";

    return 0;
}