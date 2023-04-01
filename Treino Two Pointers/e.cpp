#include<bits/stdc++.h>

using namespace std;

const int N= 2*1e5 + 3;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    vector< pair<int,int> > x;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        x.push_back( make_pair(a,i) );
    }
    sort(v.begin(),v.end());
    sort(x.begin(),x.end());
    int ve[N];
    int r,l;
    l=0;
    for(r=0;r<m;r++){
        while(v[l]<=x[r].first && l!=n){
            l++;
        }
        ve[x[r].second] = l;
    }
    for(int i=0;i<m;i++){
        cout<<ve[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}