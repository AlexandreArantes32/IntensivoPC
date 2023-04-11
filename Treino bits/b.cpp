#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    while(n){
        if( n&1 ){
            ans++;
        }
        n = n>>1;
    }
    cout<<ans<<"\n";

    return 0;
}