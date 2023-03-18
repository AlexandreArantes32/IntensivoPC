#include<bits//stdc++.h>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    //versão mais simples ,obs podia checar apenas o primeiro caracter tbm no lugar da string toda
    int totalFaces=0;
    for (int i = 0; i < n; ++i) {
        string aux;
        cin >> aux;
        if (aux == "Tetrahedron")
            totalFaces += 4;
        else if (aux == "Cube")
            totalFaces += 6;
        else if (aux == "Octahedron")
            totalFaces += 8;
        else if (aux == "Dodecahedron")
            totalFaces += 12;
        else if (aux == "Icosahedron")
            totalFaces += 20;
    }
    cout<<totalFaces<<"\n";
    //versão mais complexa
    /*
    int v[26];
    //zero a posições correspondentes as inicias do poliedros
    v[2]=v[3]=v[8]=v[14]=v[19]=0;
    for(int i=0;i<n;i++){
        string aux;
        cin>>aux;
        v[aux[0]-'A']++;
    }
    cout<< 6*v[2] + 12*v[3] + 20*v[8] + 8*v[14] + 4*v[19]<<"\n";
    */
    return 0;
}