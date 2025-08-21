//exemplo para fila estática
#include <string> //para usar string
#define TAMANHO 5
using namespace std;//para usar string sem std::string
struct Fila {
	string pessoa [TAMANHO];
	int inicio;
	int fim;
};

void inicializar (Fila *);

//string é o elemento a ser inserido
bool enfileirar (Fila *, string);

void imprimir (Fila *);

//string é o elemento que saiu da fila e será devolvido por referência
bool remover(Fila *, string);

//retorna o total de pessoas na fila
int verTamanho(Fila *);