#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,k,d,t1,t2;
    cin>>n>>t>>k>>d;
    t1 = ((n+k-1)/k)*t;
    
    if( t1 > (d+t) ){
        cout<< "YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}