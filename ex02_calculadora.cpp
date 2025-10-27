#include<iostream>
using namespace std;


int main(){
    cout << "Calculadora"<<endl;
    cout << "Digite um numero: ";
    double num1,num2;
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
    char operador;
    cout << "Escolha a operacao(+,-,*,/): ";
    cin >> operador;
    switch(operador){
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-': 
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/': 
        if(num2 == 0){
                cout << "Erro: nao eh possivel dividir um numero por zero." << endl;
                break;
            } else {
            cout << "Resultado: " << num1 / num2 << endl;
                break;
            }
            default: 
                cout << "Operacao invalida!" << endl;
                break;
    }

    return 0;


}