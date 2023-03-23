#include<bits//stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,criancas=0;
    long long saldo;
    //nesse caso se armazenar o saldo em int a variável vai estourar em pior caso
    cin>>t>>saldo;
    while(t--){
        char c;
        int x;
        cin>>c>>x;
        if(c=='+'){
            //adiciono o pacote
            saldo+=x;
        }
        else if( x>saldo){
            //crianca ficou sem sorvete
            criancas++;
        }
        else{
            //crianca saiu com os sorvetes
            saldo-=x;
        }
    }
    cout<<saldo<<" "<<criancas<<"\n";
    return 0;
}