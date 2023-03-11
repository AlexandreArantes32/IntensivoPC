#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,resposta=0;
    cin>>n;
    while(n--){
        int b;
        cin>>b;
        if(b!=1){
            resposta++;//resposta = resposta + 1;
        }
    }
    cout<<resposta<<"\n";
    
    
}