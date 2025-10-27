#include<iostream>
#include<string>
using namespace std;

int main(){
    cout<< "Verificacao de Palindromo" << endl;
    string palavra;
    cout << "Digite a palavra que gostaria de verificar: ";
    cin >> palavra;
    string palavra_invertida;
    for(int i = palavra.length() -1; i >=0; i--){
        palavra_invertida += palavra[i];
    }
    if(palavra == palavra_invertida){
        cout << "A palavra " << palavra << " eh um palindromo." << endl;
    }else{
        cout << "A palavra " << palavra << " nao eh um palindromo." << endl;
    }
    return 0;
}