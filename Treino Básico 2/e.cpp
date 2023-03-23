#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s,quartos;
    cin>>t>>s;
    //cria a string com os quartos vazios
    // poderia ser string quartos = "000000000", porém eu mostrei uma forma de criar quando o número de  quartos for muito grande
    // nesse caso
    for(int i=0;i<10;i++){
        quartos+="0";
    }
    for(int i=0;i<s.size();i++){
        //vejo se é alguem saindo
        if(s[i]<'A'){
            quartos[s[i]-'0'] = '0';
        }
        //senão pela esquerda ou pela direita
        else if( s[i]=='R'){

            for(int j=9;j>=0;j--){
                if(quartos[j]=='0'){
                    quartos[j]='1';
                    break;
                }
            }

        }else{

            for(int j=0;j<10;j++){
                if(quartos[j]=='0'){
                    quartos[j]='1';
                    break;
                }
            }

        }
    }
    cout<<quartos<<"\n";
    return 0;
}