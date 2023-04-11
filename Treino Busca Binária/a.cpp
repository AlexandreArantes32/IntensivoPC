#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> v;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    int r,l,mid,aux;
    

    while(m--){
        int a;
        cin>>a;
        aux = -1;
        r= v.size()-1;
        l = 0;
        while(l<=r){
            mid = (r+l)>>1;
            if(v[mid]>=a){
                aux = mid;
                r = mid -1;
            }
            else{
                l = mid +1;
            }
        }
        if(aux==-1 || v[aux]!=a){
            cout<<"-1\n";
        }else{
            cout<<aux<<"\n";
        }

    }
    return 0;//
}