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