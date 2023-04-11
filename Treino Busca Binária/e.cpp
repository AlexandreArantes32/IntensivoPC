#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<long long> v;

    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        v.push_back(a);
    }
    long long r,l,ans,aux;
    l = 0;
    r =1e18;
    while(l<=r){
        long long mid = (r+l)>>1;
        aux=0;
        for(int i=0;i<n;i++){
            aux+= min(mid/v[i],(long long)1e9);
        }
        if(aux>=t){
            ans = mid;
            r = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}