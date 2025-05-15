#include <iostream>
using namespace std;

int somaDigitos(int n){
    int resto, soma = 0;

    while (n/10 >0){
        resto = n%10;
        n = n/10;
        soma = soma + resto;
    }
    return soma;
}
bool Harshad(int n){
    int soma = somaDigitos(n);
    if (n%soma== 0)
        return true;
    return false;
}

int main(){
    int numero;
    cout<<"Insira um número: "<<endl;
    cin>>numero;
    cout<<Harshad(numero)<<endl;
    
}

// #include <iostream>
// using namespace std;

int fatorial(int n){
    if (n==0)
        return 1;
    return n * fatorial(n-1);
    
}
/*int main(){
    int numero;
    cout<<"Insira um valor: "<<endl;
    cin>>numero;
    cout<<fatorial(numero);
}
*/
void imprimir(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
void fatorialVetor(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        v[i] = fatorial(v[i]);
    }
}

int main(){
    int tamanho;
    cin>>tamanho;
    int vetor[tamanho], i;
    for (i= 0; i<tamanho; i++){
        cin>>vetor[i];
    }
    imprimir(vetor,tamanho);
    fatorialVetor(vetor,tamanho);
}
