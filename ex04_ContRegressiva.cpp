#include<iostream>
using namespace std;

int main(){
    cout <<"Contagem Regressiva:" << endl;
    cout << "Digite um numero inteiro: "<< endl;
    int numero;
    cin >> numero;
    while(numero>=0){
        cout << numero << endl;
        numero--;
    }

    return 0;
}