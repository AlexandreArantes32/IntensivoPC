#include<bits//stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,chaves[26];
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        //zero as chaves
        chaves['r'-'a']=chaves['b'-'a']=chaves['g'-'a']=0;
        bool ans = true;
        for(int i=0;i<s.size();i++){
            //verifico se é minúscula, tabela ascii os maiúsculos vem primeiro
            if(s[i]>'Z'){
                chaves[s[i]-'a']++;
            }
            //verifica se a posição é zero, caso seja, a resposta é no
            else if(!chaves[s[i]-'A']){
                ans= false;
            }
        }
        if( ans ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}