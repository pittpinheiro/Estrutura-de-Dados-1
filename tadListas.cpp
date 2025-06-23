// TAD: LISTAS


#include <iostream>
using namespace std;
#define TAMANHO 10

struct ListaEstatica{
    int inicio,fim;
    string itens[TAMANHO];
};

void inicializar(ListaEstatica *);
void imprimir(ListaEstatica *);
void remover(ListaEstatica *);
bool estaCheia(ListaEstatica *);
bool inserir(ListaEstatica *, string);
bool estaVazia(ListaEstatica *);

int main() {
    ListaEstatica lista;
    ///inicia a lista estática
    inicializar(&lista);
    cout<< inserir(&lista, "leite");
    cout<< inserir(&lista, "morango");
    cout<< inserir(&lista, "cereal")<<endl;
    imprimir(&lista);
    
}
void inicializar(ListaEstatica *l){
    l -> fim =0;
    l -> inicio = 0;
    
}
bool inserir(ListaEstatica *l, string dados){
    if (not estaCheia(l)){
        l -> itens[l->fim]=dados;
        l-> fim++;
        return true;
    } else
        return false;
}
void imprimir(ListaEstatica *l){
    for(int i = l->inicio;i<l->fim;i++){
        cout<<"Item: "<<l->itens[i]<<endl;
    }
}
bool estaCheia(ListaEstatica *l){
    if (l -> fim==TAMANHO)
        return true;
    return false;
}

