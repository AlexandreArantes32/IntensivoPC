#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        for(int i= s.size()-1;i>=0;i--){
            s+=s[i];
        }
        cout<<s<<"\n";
    }
    return 0;
}