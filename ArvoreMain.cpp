#include <iostream>
#include "ArvorImplementada.cpp"

using namespace std;

int main () {
	arvore minhaArvore;
	cout<<estaVazia(&minhaArvore)<<endl; 
    inicializa(&minhaArvore);
    cout<<estaVazia(&minhaArvore)<<endl; 

    inserir(&minhaArvore, 21);
    inserir(&minhaArvore, 4);
    inserir(&minhaArvore, 3);
    inserir(&minhaArvore, 33);
    
	//cout << (estaVazia(&minhaArvore) ? "Árvore está vazia" : "Árvore contém elementos") << endl;
	/*Deveria sair 1, indicando árvore vazia.
	 * Se sair 0, indicando que a árvore não está vazia, indica que o campo
	 * raiz contem um lixo de memoria que é diferente de NULL. Nesse caso dá false,
	 * mesmo que vc não tenha inserido nada.
	 * Ao inicializar, o ponteiro é inicializado corretamente*/	
}
