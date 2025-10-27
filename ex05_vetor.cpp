#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<< "Maior e Menor do Vetor" << endl;
    int tamanhoVetor = 5;
    vector<int> numeros(tamanhoVetor);
    for(int i = 0; i<numeros.size(); i++){
        cout << "Digite o " << i+1<< "o numero:";
        cin >>numeros[i];
    } 
    int maior = numeros[0];
    int menor = numeros[0];
    for(int i = 1; i<numeros.size(); i++){
        if(numeros[i] > maior){
            maior = numeros[i];
        }
            if(numeros[i] < menor){
                menor = numeros[i];
        }
    }
    cout << "O maior numero eh :" << maior << endl;
    cout << "O menor numero eh : " << menor << endl; 
    return 0;
}