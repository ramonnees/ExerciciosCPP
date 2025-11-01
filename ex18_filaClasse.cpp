#include<iostream>
#include<vector> 


using namespace std;

class Fila{
    private:
    vector<int> elementos;

    public:
    void enqueue(int valor){
        elementos.push_back(valor);
    }
    void dequeue(){
        if(!elementos.empty()){
            elementos.erase(elementos.begin());   
        }else{
            cerr << "ERRO!!! Fila Vazia!" << endl;
        }
    }
    int front(){
        if(!elementos.empty()){
            return elementos.front();
        }
        cerr << "ERRO!!! Fila Vazia!" << endl;
        return -1;
    }
    bool isEmpty(){
        return elementos.empty();
    }
};
int main(){
    cout <<"Fila com Classe" << endl;
    Fila minhaFila;
    cout << "A fila esta vazia? " << (minhaFila.isEmpty() ? "Sim" : "Nao") << endl;
    minhaFila.enqueue(10);
    minhaFila.enqueue(20);
    minhaFila.enqueue(30);
    minhaFila.enqueue(40);
    cout << "Digite um numero para adicionar a fila: ";
    int numero; 
    cin >> numero;
    minhaFila.enqueue(numero);
    cout << "Inicio da Fila: " << minhaFila.front() << endl;
    minhaFila.dequeue();
    cout << "Novo inicio da Fila: " << minhaFila.front() << endl;
    while(!minhaFila.isEmpty()){
        cout << "Removendo: " << minhaFila.front() << endl;
        minhaFila.dequeue();
    }

    return 0;
}