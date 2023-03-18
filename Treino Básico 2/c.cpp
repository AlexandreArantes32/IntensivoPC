#include<bits//stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    string s[8];
    while(t--){
        string aux;
        bool red = false;
        for(int i=0;i<8;i++){
            cin>>aux;
            s[i]=aux;
        }
        for(int i=0;i<8;i++){
            int qtd =0;
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]=='R'){
                    qtd++;
                }
            }
            if(qtd==8){
                red = true;
                break;
            }
        }
        if(red){
            cout<<"R\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}