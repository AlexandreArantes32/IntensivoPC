#include<bits/stdc++.h>

using namespace std;

int v[33];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            for(int i=0;i<32;i++){
                if(a&(1<<i)){
                    v[i]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(v[i]==n){
                ans = ans|(1<<i);
            }
            v[i]=0;
        }
        cout<<ans<<"\n";
    }
    return 0;
}