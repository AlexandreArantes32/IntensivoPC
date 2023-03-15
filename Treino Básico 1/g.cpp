#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v[101];
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i]=a;
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}