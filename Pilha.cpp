#include <iostream>
using namespace std;
struct No {
	char dado;
	No *prox;
};

struct Lista {
	No *inicio;
};

//prototipacao de funcao
void inicializar (Lista *) ;
void imprimir (Lista *);
void inserirInicio (Lista *, char);
bool estaVazia(Lista *) ;
int totalDeNos (Lista *);
void removerNo (Lista *, char); //onde  char é o elemento a ser removido

void inicializar (Lista *lista) {
	lista->inicio=NULL;
}
bool estaVazia(Lista *lista){
	if (lista->inicio==NULL)
		return true;
	return false;
}
void  inserirInicio (Lista *lista, char novo){
	//alocacao dinamica
	No *info = new No;
	info->dado = novo;
	if (estaVazia(lista))
		info->prox=NULL;
	else 
		info->prox = lista->inicio;		
	lista->inicio=info;	
}
int totalDeNos (Lista * lista){
    int total = 0;
    if(not estaVazia(lista)){
        No *aux = lista ->inicio;
        while(aux != NULL){
            total++;
            aux = aux ->prox;
        }
    }
    return total;
}
void removerNo (Lista *lista, char remove){
    if (estaVazia(lista)){
        cout<<"Nada para remover";
    }else{
        No *atual = lista -> inicio;
        No *anterior;
        if(atual->dado == remove){
            lista -> inicio = atual ->prox;
        }else{
            No *anterior;
            while (atual != NULL and atual ->dado != remove){
                anterior = atual;
                atual = atual -> prox;
                
            }
            if (atual == NULL){
                cout<<"elemento não encontrado.\n";
            }else{
                anterior ->prox = atual -> prox;
            }
            //delete anterior;
        }
    delete atual, anterior;
    }
}
void imprimir (Lista *lista){
	if (not estaVazia(lista)) {
		No *aux=lista->inicio;
		while (aux != NULL) {
			cout<<" Na lista "<<aux->dado;
			aux=aux->prox;
		}
	} else
		cout<<"Lista vazia";	
}

int main () {
	Lista mLista;
	inicializar(&mLista);
	cout<<estaVazia(&mLista)<<endl;//1 true
	inserirInicio (&mLista, 'B');
	inserirInicio (&mLista, 'P');
	inserirInicio (&mLista, 'T');
	inserirInicio (&mLista, 'F');
	
	
	imprimir(&mLista);
	removerNo (&mLista, 'P');
	imprimir(&mLista);
}


