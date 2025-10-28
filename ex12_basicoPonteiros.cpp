#include<iostream>


using namespace std;
int main(){
    cout << "Basico Ponteiros" << endl;
    int numero = 50;
    int* ptr = &numero;
    cout << "Valor de numero: " << numero << endl; // valor da variavel
    cout << "Endereco de numero: " << &numero << endl; // endereco da variavel
    cout << "Valor de ptr: " << *ptr << endl;// valor que o ponteiro vê
    *ptr = 100;  // altera valor da variavel atraves do ponteiro
    cout << "Valor de ptr: " << *ptr << endl; // valor que o ponteiro vê

    return 0;
}