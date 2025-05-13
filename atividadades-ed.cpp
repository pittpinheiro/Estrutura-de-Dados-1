#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 1;
    while (i <= 10){
        cout<<i<<"\n";
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int i;
    i = 1;
    do {
        cout<<i<<" ";
        i++;
    }while (i <= 10);
    
    cout << endl << endl;
    
    for (int j =1;j<=10;j++)
        cout<<j<<" ";
        
    cout << endl << endl;
    
    int n;
    cout<<"Escreva um valor: ";
    cin >> n;
    while (n%2 == 0){
        cout<<n<<" é par."<<"\n";
        cout<<"Escreva um valor: ";
        cin >> n;
    }
    cout<<n<<" é impar.";

    return 0;
}

int main() {
    int numero;
    numero = 1;
    int somador;
    somador = 0;
    while (numero <1000){
        numero++;
        if (numero%3==0 or numero%5 == 0){
            somador+=numero;
        }
    }
    cout<<"O valor é "<<somador<<".";
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int valor;
    int somador;
    float quantidade = 0;
    float media;
    int negativos = 0;
    int positivos = 0;
    float percentualPositivos;
    float percentualNegativos;

     
    cout<<"Insira um valor(diferente de 0): "<<"\n";
    cin>>valor;
    
    while (valor != 0){
        somador += valor;
        quantidade+=1;
        if (valor>0){
            positivos++;
        }else{
            negativos++;
        }
        cout<<"Insira um valor(diferente de 0): "<<"\n";
        cin>>valor;
        
    }
    media = somador/quantidade;
    cout<<media<<"\n";
    cout<<positivos<<"\n";
    cout<<negativos<<"\n";
    
    percentualPositivos = (positivos/quantidade) *100.0;
    percentualNegativos = (negativos/quantidade) *100.0;
    cout<<percentualPositivos<<"%"<<"\n";
    cout<<percentualNegativos<<"%"<<"\n";
    
    return 0;
}