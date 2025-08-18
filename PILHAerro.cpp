//ESSE CÓDIGO POSSUI ERROS E DEVE SER CONSERTADO
#define MAXTAM 5
struct Pilha {
	char itens[MAXTAM];
	int topo;
};
void inicializa (Pilha *); 
void empilha (Pilha *, char) ;
char verTopo (Pilha); //não modifica a pilha
char desempilha(Pilha *);
void imprimirPilha (Pilha *); //não modifica a pilha
int tamanhoPilha (Pilha *); //não modifica a pilha
int estaCheia(Pilha *); //não modifica a pilha
int estaVazia(Pilha *);  //não modifica a pilha

#include <iostream>
//#include "pilha_estatica.hpp"
using namespace std;

void inicializa (Pilha *p){
    p -> topo = -1;
    cout<<"Inicializou"<<endl;
}

int estaCheia(Pilha * p){
    if(p->topo = MAXTAM-1)
        return 1;
    return 0; //não está cheia
}

void empilha (Pilha *p, char dado){
    if (estaCheia(p)==1){
        cout<<"Não tem espaço"<<endl;
    }
    else{
        p->topo++;
        p->itens[p->topo] = dado;
    }

}
char verTopo (Pilha *p) {
	return p->itens[p->topo];
}

void imprimirPilha (Pilha *p){
    int i =
    for (int i = p->topo; i>=0;i--){
        cout<<"Itens pilha: "<<p->itens[i]<<endl;
    }
}

//#include <iostream>
//#include "pilha_estatica.cpp"
//using namespace std;

int main () {
	Pilha pilha;
	inicializa (&pilha);
	empilha(&pilha,'J');
	empilha(&pilha,'N');
	empilha(&pilha,'K');

}


