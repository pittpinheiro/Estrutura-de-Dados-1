//exemplo para fila dinâmica
#include <string> //para usar string
using namespace std;//para usar string sem std::string
struct no  {
	string nome;
	no *prox;
};

struct Fila {
	no *inicio;
	no *fim;
};

void inicializar (Fila *);

//string é o elemento a ser inserido
bool enfileirar (Fila *, string);

void imprimir (Fila *);

//string é o elemento que saiu da fila e será devolvido por referência 
//string tem passagem por referência implicita
bool remover(Fila *, string);

//retorna o total de pessoas na fila
int calcularOcupacao (Fila *);