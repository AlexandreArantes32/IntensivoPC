#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int r,l,ans;
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        r=n-1;
        l=0;
        ans=-1;
        while(l<=r){
            int mid =(r+l)>>1;
            if(v[mid]<=a){
                ans = mid;
                l = mid +1;
            }
            else{
                r = mid -1;
            }
        }
        cout<<ans+1<<" ";

    }
    cout<<"\n";
    
    return 0;
}