#include<iostream>


using namespace std;

void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    cout << "Passagem por Referencia" << endl;
    cout << "Digite um numero inteiro: " << endl;
    int x,y;
    cin >> x;
    cout << "Digite outro numero inteiro: " << endl;
    cin >> y;
    cout << "Antes da troca x: " << x << ", y: " << y << endl;
    trocar(&x, &y);
    cout << "Depois da troca x : " << x << ", y: " << y << endl;
}