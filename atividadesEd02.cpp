#include <iostream>
using namespace std;

/* void imprimir(int tamanho, int v[], int vFat[]){
    for (int i=0;i<tamanho;i++){
        cout<<v[i]<<" "<<vFat[i]<<" ";
    }
} */
/* int main(){
    int tamanho = 5, i,fat,j;
    int v [tamanho], vFat[5];

    //entrada de dados
    for (i=0;i<tamanho;i++){
        cout<<"Insira o valor que queria descobrir o fatorial: ";
        cin>>v[i];
        fat = 1;
        for (j=1;j<=v[i];j++){
            fat=fat*j;
        }
        vFat[i] = fat;
    }

    //saida de dados
    imprimir(tamanho, v[], vFat[]);

    return 0;
} */

/* float media(float n1,float n2,float n3){
    float M;
    M = (n1+n2+n3)/3;
    return M;
}

int main(){
    float n1, n2, n3;
    cout<<"Insira trẽs valores: ";
    cin >> n1 >> n2 >> n3;

    cout<<media(n1,n2,n3);
    return 0;
} */

int redondoBaixo(float numero){
    int redondo;
    redondo = int(numero);

    return redondo;
}

int redondoCima(float numero){
    int redondo;
    if (numero - int(numero) !=0){
        redondo = int(numero) + 1;
        return redondo;
    }
    return numero;

}
int redondoConvencional(float numero){
    float decimal;
    decimal = numero - int(numero);
    if (decimal < 0.5){
        return redondoBaixo(numero);
    }
    return redondoCima(numero);
}

int main(){
    float numero;
    cout<<"Insira um valor decimal: "<< endl;
    cin>>numero;
    
    cout<<redondoBaixo(numero)<<endl;
    cout<<redondoCima(numero)<<endl;
    cout<<redondoConvencional(numero)<<endl;

}