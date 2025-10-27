#include<iostream>
#include<vector>
#include<string>
#include<limits>

using namespace std;
struct Aluno{
    string nome;
    int matricula;
    float media;
};

int main(){
    cout << "Cadastro de Alunos" << endl;
    vector<Aluno> turma;
    while(true){
        cout<< "Escolha uma das opcoes abaixo: "<<endl;
        cout << "1 - Cadastrar Aluno" << endl;
        cout << "2 - Listar Alunos" << endl;
        cout << "3 - Sair" << endl;
        int opcao;
        cin >> opcao;

        if(cin.fail()){ // se o user digitar algo que nao seja numero
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "Entrada invalida. Por favor, insira um numero." << endl;
            continue;
        }
        switch(opcao){
        case 1:
        {
            Aluno novoAluno;
            cout<< "Digite o nome do aluno: ";
            cin.ignore(); // limpa o buffer deixado pelo cin>>opcao
            getline(cin, novoAluno.nome);//le a linha inteira com espacos por causa do nome
    
            cout<< "Digite a matricula do aluno: ";
            cin >> novoAluno.matricula;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Matricula invalida. Cadastro cancelado. " << endl;
                break;
            }
            cout << "Digite a media do aluno: ";
            cin >> novoAluno.media;
            if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<< "Media invalida. Cadastro cancelado." << endl;
            break;
            }
            turma.push_back(novoAluno);
            cout << "Aluno cadastrado!"<< endl;
            break;
        }
        case 2:
        { 
            if(turma.empty()){
                cout << "A turma nao possui nenhum aluno cadastrado." << endl;

            }else{
                for(int i = 0; i < turma.size(); i++){
                    cout << "---Aluno " << i+1 << "--- " << endl;
                    cout << "Nome: " << turma[i].nome<< endl;
                    cout << "Matricula: " << turma[i].matricula<< endl;
                    cout << "Media: " << turma[i].media<< endl;
                }
        }
        break;
        }
        case 3: 
        {
            cout<<"Saindo do programa..."<< endl;
            return 0;
        }
        default:{
        cout << "Opcao invalida. Tente novamente."<<endl;
        break;
        }
        }
    
    }
}