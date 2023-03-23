#include<bits//stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<pair<double,double>> v;
    int t,k;
    cin>>t>>k;
    while(t--){
        double a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    // questão bem matemática, v = ds/dt , logo dt = ds/v, como tem k documentos escritos multiplicaremos por k
    // o ds pode ser encontrado pela distância entre dois pontos; d = sqrt (x1-x2)^2 + (y1-y2)^2
    double ds = 0.0;
    for(int i=0;i<v.size()-1;i++){
        ds+= sqrt((v[i].first - v[i+1].first)*(v[i].first - v[i+1].first) + (v[i].second - v[i+1].second)*(v[i].second - v[i+1].second));
    }
    // v = 50mm/s
    // fixed set preciosion , serve para imprimir os 9 digitos decimais como no output do exercício
    cout<< fixed << setprecision(9) << (ds/50.0)*k<<"\n";
    return 0;
}