#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v[305];
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        for(int i=0;i<x;i++){
            int a;
            cin>>a;
            v[i]=a;
        }
        int r,l;
        l=0;
        r= x-1;
        bool turno = true;
        while(l<=r){
            if(turno){
                cout<<v[l]<<" ";
                l++;
                turno = false;
            }
            else{
                cout<<v[r]<<" ";
                r--;
                turno = true;
            }

        }
        cout<<"\n";
    }
    
    return 0;
}