#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v[2],a;
    cin>>n;
    while(n){
        a=v[0]=v[1]=0;
        for(int i=0;i<32;i++){
            if( n&(1<<i) ){
                v[a] +=(1<<i);
                a = 1-a;
            }
        }
        cout<<v[0]<<" "<<v[1]<<"\n";
        cin>>n;
        
    }
    return 0;
}