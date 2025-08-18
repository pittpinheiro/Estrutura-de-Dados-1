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
bool inserirPosicao(ListaEstatica *, string);

int main() {
    ListaEstatica lista;
    ///inicia a lista estática
    inicializar(&lista);
    inserir(&lista, "leite");
    inserir(&lista, "morango");
    inserir(&lista, "cereal");
    inserirPosicao(&lista, "aveia");
    
    imprimir(&lista);
    
}
void inicializar(ListaEstatica *l){
    l -> fim =0;
    l -> inicio = 0;
    
}
void remover(ListaEstatica *l){
    string remover;
    cout<<"Qual elemento deseja remover?";
    cin>>remover;
    
    int posicao = -1, i;
    i=l -> inicio;
    
    while(l -> itens[i] != remover and i < l->fim)
        i++;
    cout <<i<<endl;
}

bool inserir(ListaEstatica *l, string dados){
    if (not estaCheia(l)){
        l -> itens[l->fim]=dados;
        l-> fim++;
        return true;
    } else
        return false;
}
bool inserirPosicao(ListaEstatica *l, string dado){
    int posicao;
    cout<<"Em qual posição deseja colocar o novo dado? ";
    cin>>posicao;
    if (posicao > l->fim){
        cout<<"Posição inválida";
        return false;
    } else {
        if (not estaCheia(l)){
            if (posicao == l -> fim){
                l->itens[posicao] = dado;
                l -> fim++;
            } else {
                int i;
                for (i= l->fim; i>posicao ;i--)
                    l->itens[i] = l -> itens[i - 1];
                l -> itens[posicao] = dado;
                l -> fim++;
            }
        }
    }
    return true;
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

