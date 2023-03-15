#include<bits/stdc++.h>

using namespace std;
bool letras[26];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]>95 && s[i]<123){
            letras[s[i]-'a']=true;
        }
    }
    int qtd=0;
    for(int i=0;i<26;i++){
        if(letras[i]){
            qtd++;
        }
    }
    cout<<qtd<<"\n";
    return 0;
}