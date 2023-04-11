#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<long long> v;
    long long x=0;
    for(int i=0;i<n;i++){
        long long a;
        cin>>a;
        x+=a;
        v.push_back(x);
    }
    long long a,r,l,aux;
    while(m--){
        cin>>a;
        aux=-1;
        r=n-1;
        l=0;
        while(l<=r){
            long long mid = (r+l)>>1;
            if(v[mid]<=a){
                aux = mid;
                l = mid +1;
            }
            else{
                r = mid -1;
            }
        }
        if(aux==-1 ){
            cout<<"1 "<<a<<"\n";
        }
        else if(v[aux]==a){
            cout<<aux+1<<" "<< (!aux ? a : a-v[aux-1])<<"\n";

        }
        else{
            cout<<aux+2<<" "<<a-v[aux]<<"\n";
        }
    }

    return 0;
}