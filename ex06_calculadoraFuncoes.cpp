#include<iostream>
using namespace std;

double somar(double a, double b){
    return a + b;
}
double subtrair(double a, double b){
    return a - b;
}
double multiplicar(double a, double b){
    return a * b;
}
double dividir(double a, double b){
        return a / b;
}

int main(){
    cout << "Calculadora"<<endl;
    double num1,num2, resultado;
    char operador;
    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;
    cout << "Escolha a operacao(+,-,*,/): ";
    cin >> operador;
    bool operacaoValida = true;

    switch(operador){
        case '+':
        resultado = somar(num1,num2);
            break;
        case '-': 
        resultado = subtrair(num1,num2);
            break;
        case '*':
        resultado = multiplicar(num1,num2);
            break;
        case '/': 
        if(num2 == 0){
            operacaoValida = false;
        }else{
             resultado = dividir(num1,num2);
        }
            break;
        default: 
                operacaoValida = false;
                break;
    }
    if(operacaoValida){
        cout << "Resultado: " << resultado << endl;
    }else{
        cout << "Nao foi possivel realizar a operacao." << endl;
    }

    return 0;


}