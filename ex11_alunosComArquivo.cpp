#include<iostream>
#include<string>
#include<fstream> // ofstream - escrever em arquivos e ifstream - ler de arquivos
#include<vector>
#include<limits>


using namespace std;

struct Aluno{
    string nome;
    int matricula;
    float media;
};


void salvarTurma(vector<Aluno>& turma){ // pega o vetor de alunos e salva em um arquivo
    ofstream arquivo("alunos.txt");
    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo para salvar a turma." << endl;
        return;
    }
    for(size_t i = 0; i < turma.size(); i++){// percorre o vetor de alunos e escreve cada dado em uma linha
        arquivo << turma[i].nome << endl;
        arquivo << turma[i].matricula << endl;
        arquivo << turma[i].media << endl;
    }
    arquivo.close(); // fecha o arquivo apos escrita
}

void carregarTurma(vector<Aluno>& turma){ // carrega os dados do arquivo para o vetor de alunos
    ifstream arquivo("alunos.txt");
    if(!arquivo.is_open()){
        cout << "Nenhum dado no arquivo, comecando do zero." << endl;
        return;
    }
    Aluno temp;
    while(getline(arquivo,temp.nome)){ // se ler o nome, é pq tem mais alunos, entao le matricula e media
        arquivo >> temp.matricula;
        arquivo >> temp.media;

        arquivo.ignore(numeric_limits<streamsize>::max(), '\n'); // limpa o buffer apos ler numeros
        turma.push_back(temp);
    }
    arquivo.close();

        if(!turma.empty()){
            cout << "Dados de "  << turma.size() << " alunos carregados com sucesso. " << endl;
        }

}

int main(){
    cout << "Cadastro de Alunos - com arquivos" << endl;
    vector<Aluno> turma;
    carregarTurma(turma);

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
            salvarTurma(turma);
            cout << "Aluno cadastrado e salvo no arquivo"<< endl;
            break;
        }
        case 2:
        { 
            if(turma.empty()){
                cout << "A turma nao possui nenhum aluno cadastrado." << endl;

            }else{
                for(size_t i = 0; i < turma.size(); i++){
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
            salvarTurma(turma);
            cout<<"Saindo do programa..."<< endl;
            return 0;
        }
        default:{
        cout << "Opcao invalida. Tente novamente."<<endl;
        break;
        }
        }
    
    }

    return 0;
}