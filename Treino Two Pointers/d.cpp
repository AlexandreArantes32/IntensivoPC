#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    long long sum , ans;
    sum=0;
    ans =0;
    int r,l;
    r=l=0;
    for(r=0;r<n;r++){
        sum+=v[r];
        while(sum>m && l!=(n-1)){
            sum-=v[l];
            l++;
        }
        if(sum<=m){
            ans = max(ans,sum);
        }
    }
    cout<<ans<<"\n";
    
    return 0;
}