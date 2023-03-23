#include<bits//stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,policiais=0,crimes=0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        // vejo se é um crime
        if(a == -1){
            //se há policiais o crime é tratado
            if(policiais){
                policiais--;
            }
            else{
                crimes++;
            }
        }
        else{
            policiais+=a;
        }
    }
    cout<<crimes<<"\n";
    return 0;
}