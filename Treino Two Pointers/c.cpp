#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;
    while(n--){
        int x;
        cin>>x>>s;       
        int r,l,ans;
        l = 0;
        r= x-1;
        ans = x;
        while( s[r]!=s[l] && l<r){
            l++;
            r--;
            ans-=2;
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}