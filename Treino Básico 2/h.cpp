#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int t;
    cin>>t;
    while(t--){
        v.clear();
        set<int> s;
        int a,b;
        cin>>a>>b;
        //inicialmente nenhum post saiu
        for(int i=0;i<a;i++){
            v.push_back(-1);
        }
        for(int i=0;i<b;i++){
            int c;
            cin>>c;
            // se não houve ação no post antes
            if(s.find(c)==s.end()){
                //adiciono ao set
                s.insert(c);
                if(s.size()<=a){
                    //atualiza o momento que ele sai dos tópicos recentes
                    v[   a- s.size() ] = i + 1;
                }
            }
        }
        for(int i=0;i<a;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}