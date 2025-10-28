#include<iostream>


using namespace std;


int main(){
    cout << "Alocacao Dinamica" << endl;
    int tamanho;
    cout << "Digite um tamanho:";
    cin >> tamanho;
    int* meuArray = new int[tamanho];
    for(int i=0; i<tamanho; i++){
        cout <<"Digite o valor para a posicao " << i << endl;
        cin >> meuArray[i];
    }
    for(int i=0; i<tamanho; i++){
        cout << "O valor na posicao " << i << " eh " << meuArray[i] << endl;
    }

    delete[] meuArray;
    meuArray = nullptr;
    return 0;
}