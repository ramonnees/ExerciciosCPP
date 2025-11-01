#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Tarefa{
    private:
    string descricao;
    bool concluida;
 
    
    public:
    Tarefa(string desc){// construtor
        descricao = desc;
        concluida = false;
    }

    void marcarConcluida(){
        concluida = true;
    }

    void imprimirTarefa(){
        cout << (concluida? "[X] " : "[ ] ");
        cout << descricao << endl;

    }
};

int main(){
    cout << "Lista de Tarefas" << endl;
    vector<Tarefa> listaTarefas;
    listaTarefas.push_back(Tarefa("Lavar louca")); //adiciona tarefas na lista
    listaTarefas.push_back(Tarefa("Estudar c++"));
    listaTarefas.push_back(Tarefa("Fazer compras"));

    listaTarefas[0].marcarConcluida();// marca a primeira tarefa como concluida
    for(int i=0; i<listaTarefas.size();i++){
        listaTarefas[i].imprimirTarefa();// imprime todas

    }
    
    return 0;
}