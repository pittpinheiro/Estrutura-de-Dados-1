ordenacao02
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void saida (int vet[], int size) {
    int i;
    for (i=0;i<size;i++)
    cout<<vet[i]<<" ";
    cout<<endl;
}
void shell_sort(int vet[], int size, int gaps[],int gap) {
	//sugestoes de gaps
    int pos_gap = gap - 1; //tamanho do vetor gaps - 1
    while (gaps[pos_gap] > size) { //percorre gaps buscando um valor < que o tamanho do vetor de dados
        pos_gap--;
    }    // após rodar, pos_gap eh 2, onde está o valor 10 em gaps
    
    int value;
    int j;
    while ( pos_gap >= 0 ) {
        int gap = gaps[pos_gap];
        cout << "gap: " << gap << endl;

        for (int i = gap; i < size; i++) {
            value = vet[i];
            j = i;
            while ((j >= gap) and (value < vet[j - gap])) {
                vet[j] = vet[j - gap];
                j = j - gap;
            }
            vet[j] = value; //{16, 17, 30, 94, 51, 12, 28, 3, 21, 33, 59, 8};
        }

        pos_gap--;
    }
}

int main(){
    int tamanho_vetor=0, tamanho_lacunas = 0;
    cout<<"Insira tamanho vetor: "<<endl;
    cin>>tamanho_vetor;
    
    int vetor[tamanho_vetor];
    for (int i = 0;i<tamanho_vetor; i++){
        cout<<"Insira valores: "<<endl;
        cin>>vetor[i];
    }
    cout<<"Insira tamanho lacunas: "<<endl;
    cin>>tamanho_lacunas;
    
    int lacunas[tamanho_lacunas];
    for (int i = 0;i<tamanho_lacunas; i++){
        cout<<"Insira valores: "<<endl;
        cin>>lacunas[i];
    }
    shell_sort(vetor,tamanho_vetor,lacunas,tamanho_lacunas);
    saida(vetor,tamanho_vetor);
}
