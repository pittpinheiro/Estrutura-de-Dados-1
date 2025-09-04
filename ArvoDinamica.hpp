struct no {
	int n;
	no *esq, *dir;
};

struct arvore {
	no *raiz;
};

void inicializa(arvore *); 
no* criarNo(int);
no* inserirNo (no * , int) ;
void inserir (arvore *, int);
void emOrdem (no *);
void posOrdem (no *);
void preOrdem (no *);
int estaVazia (arvore *);
no* busca (no *, int ); 
