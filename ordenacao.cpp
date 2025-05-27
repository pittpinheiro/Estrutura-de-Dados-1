//crescente
#include <iostream>
using namespace std;
void saida (int t, int v[]) {
    int i;
    for (i=0;i<t;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
void selection_sort (int t, int v[]) {
    int menor, aux_troca, i,j;
    for (i=0; i<t-1; i++) {
        menor=i;
        for (j=i+1; j<t; j++) {
            if (v[j] < v[menor] )   
            menor=j;
        }
        aux_troca=v[i];
        v[i]=v[menor];
        v[menor]=aux_troca;
        //fim
        saida(t,v);
    }
}
int main () {
    int tamanho = 0;
    cout<<"Insira o tamanho da lista: "<<endl;
    cin>>tamanho;
    int v[tamanho] = {};
    for (int i =0; i<tamanho; i++){
        cout<<"Digite o valor do elemento: "<<endl;
        cin>>v[i];
    }
    selection_sort(tamanho,v);
    saida(tamanho,v);
    return 0;
}

//decrescente
#include <iostream>
using namespace std;
void saida (int t, int v[]) {
    int i;
    for (i=0;i<t;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
void selection_sort (int t, int v[]) {
    int maior, aux_troca, i,j;
    for (i=0; i<t-1; i++) {
        maior=i;
        for (j=i+1; j<t; j++) {
            if (v[j] > v[menor] )   
            maior=j;
        }
        aux_troca=v[i];
        v[i]=v[maior];
        v[maior]=aux_troca;
        //fim
        saida(t,v);
    }
}
int main () {
    int tamanho = 0;
    cout<<"Insira o tamanho da lista: "<<endl;
    cin>>tamanho;
    int v[tamanho] = {};
    for (int i =0; i<tamanho; i++){
        cout<<"Digite o valor do elemento: "<<endl;
        cin>>v[i];
    }
    selection_sort(tamanho,v);
    saida(tamanho,v);
    return 0;
}
//questao 02

#include <iostream>
using namespace std;
struct meme{
    int numero;
    string arquivo,assunto,site;
    
};
void entrada(meme v[],int total){
    for (int i = 0; i<total; i++){
        cin>>v[i].numero>>v[i].arquivo;
        cin>>v[i].assunto>>v[i].site;
    }
}
void imprime(meme v[],int total){
    for (int i = 0; i<total; i++){
        cout<<v[i].numero<<" "<<v[i].arquivo<<" ";
        cout<<v[i].assunto<<" "<<v[i].site<<endl;
    }
}
int main(){
    int total, i =0;
    cin>>total;
    meme v[total];
    //entrada de dados
    entrada(v,total);
    //saida
    imprime(v,total);
    
}

//questao 04
#include <iostream>
using namespace std;
struct meme{
    int numero;
    string arquivo,assunto,site;
    
};
void entrada(meme v[],int total){
    for (int i = 0; i<total; i++){
        cin>>v[i].numero>>v[i].arquivo;
        cin>>v[i].assunto>>v[i].site;
    }
}
void imprime(meme v[],int total){
    for (int i = 0; i<total; i++){
        cout<<v[i].numero<<" "<<v[i].arquivo<<" ";
        cout<<v[i].assunto<<" "<<v[i].site<<endl;
    }
}
void selection_sort (meme v[],int t) {
    int menor, i,j;
    meme aux_troca;
    for (i=0; i<t-1; i++) {
        menor=i;
        for (j=i+1; j<t; j++) {
            if (v[j].assunto < v[menor].assunto )   
            menor=j;
        }
        aux_troca=v[i];
        v[i]=v[menor];
        v[menor]=aux_troca;
        //fim
      
    }
}
int main(){
    int total, i =0;
    cin>>total;
    meme v[total];
    //entrada de dados
    entrada(v,total);
    //saida
    selection_sort(v,total);
    imprime(v,total);
    
}