#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,v[1005];
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[i] = a;
    }
    int r,l;
    r=n-1;
    l=0;
    int score[2];
    score[0]=score[1]=0;
    int vez =0;
    while(l<=r){
        if(v[l]<v[r]){
            score[vez]+=v[r];
            r--;
        }
        else{
            score[vez]+=v[l];
            l++;
        }
        vez = 1 - vez;
    }
    cout<<score[0]<<" "<<score[1]<<"\n";
    return 0;
}