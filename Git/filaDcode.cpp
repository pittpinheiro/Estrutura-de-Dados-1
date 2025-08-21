#include "filaD.hpp"
#include <iostream>

using namespace std;

void inicializar (Fila *fila){
	//esta situaçao indica fila vazia
	fila->fim=NULL;
	fila->inicio=NULL;
}

//string é o elemento a ser inserido
bool enfileirar (Fila *fila, string x) {
	no *novo  = new no;
	if (novo==NULL) //falha na alocação dinâmica
		return false;
	novo->nome=x;
	novo->prox=NULL;
	
    if (fila-> inicio ==NULL)
        fila->inicio = novo;
    else
        fila-> fim ->prox = novo;
    fila ->fim = novo;
	return true;

}

void imprimir (Fila *fila){
	//deveria verificar se está vazia
	no *aux = fila->inicio;
	while (aux != NULL) {
			cout<<"\nNa fila "<<aux->nome;
			aux = aux->prox;
		}

}
bool remover(Fila *fila, string x){
	if (fila->inicio==NULL)
		return false;

	//completar aqui
	return true;
}

int main () {
	Fila filaRu;
	inicializar(&filaRu);
	string nome;
	bool statusFila = true;
	do {
		cout<<"Digite um nome ";
		cin>>nome;
		if (nome != "fim"){
			statusFila = enfileirar (&filaRu, nome);
			cout<<statusFila<<endl;//0 é falso, 1 é verdadeiro
		}
		
	} while (nome!="fim" and statusFila==true );
	
	cout<<"Fila atual"<<endl;
	imprimir(&filaRu);
}
