#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int c,saldo,resposta;
    saldo = resposta = 100;
    cin>>c;
    while(c--){
        int b;
        cin>>b;
        saldo+=b;
        resposta = max(resposta,saldo);
    }
    cout<<resposta<<"\n";
    
    
}