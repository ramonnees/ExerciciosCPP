#include<iostream>
#include<string>
using namespace std;

int main(){
    cout << "Inversor de String"<< endl;
    string palavra;
    cout << "Digite a palavra que gostaria de inverter: ";
    cin >> palavra;
    string palavra_invertida;
    for(int i = palavra.length() - 1; i >= 0; i--){
        palavra_invertida += palavra[i];
    }
    cout << "Entrada: " << palavra << endl;
    cout << "Inverida: " << palavra_invertida << endl;
    return 0;
}