#include<iostream>
#include<vector>

using namespace std;

class Pilha{
    private:
    vector<int> elementos;

    public:
    void push(int valor){
        elementos.push_back(valor);
    }
    void pop(){
        if(!elementos.empty()){
            elementos.pop_back();
        }else{
            cout << "Pilha Vazia!" << endl;
        }
    }
    int top(){
        if(!elementos.empty()){
            return elementos.back();
        }
        cerr <<"Pilha Vazia!" << endl; // usar cerr para erros
        return -1; //erro
    }
    bool isEmpty(){
        return elementos.empty();
    }
};
int main(){
    cout << "Pilha com Classe" << endl;
    Pilha minhaPilha;
    minhaPilha.push(1);
    minhaPilha.push(2);
    minhaPilha.push(3);
    minhaPilha.push(4);
    cout << "Topo da Pilha: " << minhaPilha.top() << endl;
    minhaPilha.pop();
    cout << "Topo da Pilha apos pop: " << minhaPilha.top() << endl;
    cout << "Digite um numero para colocar na pilha:";
    int valor; 
    cin >> valor;
    minhaPilha.push(valor);
    while(!minhaPilha.isEmpty()){
        cout << "Removendo: " << minhaPilha.top() << endl;
        minhaPilha.pop();
    }
    return 0;
}