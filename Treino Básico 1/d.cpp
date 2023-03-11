#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,ans;
    cin>>a>>b;
    while(a<=b){
        ans++;
        a*=3;
        b*=2;
    }
    cout<<ans<<"\n";
    
    
}