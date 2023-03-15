#include<bits/stdc++.h>

using namespace std;


bool solve(string s, int a){
    vector<char> v ={'Y','e','s'};
    int x = a;
    for(int i =0;i<s.size();i++ ){
        if( s[i]!=v[x] ){
            return false;
        }
        x =(++a)%3;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        bool ans ;
        if(s[0]=='Y'){
            ans = solve(s,0);
        }
        else if( s[0]=='e'){
            ans = solve(s,1);
        }
        else if (s[0]=='s'){
            ans =solve(s,2);
        }else{
            ans = false;
        }
        if(ans){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }       
    }
    return 0;
}