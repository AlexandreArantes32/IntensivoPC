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
        int a;
        cin>>a;
        //momentos que as tarefas iniciaram
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
            v.push_back(b);
        }
        int ultimatarefa = 0;
        for(int i=0;i<a;i++){
            int b;
            cin>>b;
            // caso a tarefa i tenha iniciado depois da última tarefa ter terminado, o tempo de execução é quando ela iniciou na fila
            // menos quando ele terminou
            if(ultimatarefa < v[i] ){
                cout<< b - v[i]<<" ";  
            }
            //caso não, ele começa a trabaçhar depois q ele terminou a última,aí ele pega quando terminou menos qunado a última terminou
            
            else{
                cout<<  b - ultimatarefa<<" ";
            }
            ultimatarefa = b;
        }
        cout<<"\n";
    }
    return 0;
}