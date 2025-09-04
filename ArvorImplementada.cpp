#include <iostream>
#include "ArvoDinamica.hpp"

using namespace std;

void inicializa(arvore *a){
	a->raiz=NULL;
}

no* criarNo(int valor) {
	no *novo = new no;
	novo->dir=NULL;
	novo->esq=NULL;
	novo->n=valor;
	return novo;
}

no* inserirNo (no *raiz , int valor) {
	if (raiz==NULL) 
		return criarNo(valor);
	if (valor < raiz->n)
		raiz->esq = inserirNo(raiz->esq, valor);
	else
		raiz->dir = inserirNo (raiz->dir,valor);
	return raiz;
}

void inserir (arvore *a, int valor) {
	a->raiz = inserirNo(a->raiz,valor);
}

void emOrdem (no *raiz) {
	if (raiz != NULL) {
		emOrdem(raiz->esq);
		cout<<raiz->n<<" ";
		emOrdem(raiz->dir);
	}
}
void posOrdem (no *raiz) {
}
void preOrdem (no *raiz) {
    if (raiz != NULL){
        cout<<raiz->n<<" ";
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }

}

int estaVazia (arvore *a) {
	return a->raiz==NULL;	
}
