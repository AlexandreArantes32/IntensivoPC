#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int ans =0;
    for(int i=0;i<3;i++){
        if( n&(1<<i) || k&(1<<i) ){
            ans = ans|(1<<i);
        }
    }
    cout<<ans<<"\n";

    return 0;
}