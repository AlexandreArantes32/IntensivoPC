#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int v[5][5];
    pair<int,int> p;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            v[i][j]=a;
            if(a){
                p.first = i;
                p.second = j;
            }
        }
    }
    
    cout<< abs(p.first - 2) + abs(p.second -2)<<"\n";
    return 0;
}