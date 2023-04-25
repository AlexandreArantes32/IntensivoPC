#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long aux;
    while(n){
        aux  = (n>>1) + 1;
        //cout<<aux<<"\n";
        long long ans =0;
        for(int i=1;i<=n;i++){
            int a;
            cin>>a;
            if(i>=aux){
                ans+=a;
            }
        }
        cout<<ans<<"\n";
        cin>>n;
    }
    return 0;
}