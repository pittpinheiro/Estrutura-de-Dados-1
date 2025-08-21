#include "filaE.hpp"
#include <iostream>

using namespace std;

void inicializar (Fila *fila) {
	//esta situação indica fila vazia
	fila->inicio=0;
	fila->fim=0;
}
bool enfileirar (Fila *fila, string x) {
	if (fila->fim == TAMANHO)
		return false ; //fila cheia
	else {
		fila->pessoa[fila->fim] = x;
		fila->fim++;
		return true;
	}
}

bool remover(Fila * fila, string x){
    //aprender depois
}

void imprimir (Fila *fila) {
	//se fila vazia
	if (fila->fim==0)
		cout<<"Fila vazia"<<endl;
	else {
		for (int i=fila->inicio; i<fila->fim; i++)
			cout<<fila->pessoa[i]<<endl;
	}
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
    remover(&filaRu, nome);
	
	cout<<"Fila atual"<<endl;
	imprimir(&filaRu);
}
