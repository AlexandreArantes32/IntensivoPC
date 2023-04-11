#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    long long l=0,r=n,ans=0;
    while(l<=r){
        long long mid = (l+r)>>1;
        long long aux = ( (1+mid)*mid)/2 - (n-mid);
        if(aux<=k){
            ans = mid;
            l = mid + 1;

        }else{
            r = mid -1;
        }
        //cout<<r<<" "<<l<<"\n";
    }
    cout<< n-ans <<"\n";


    return 0;
}