#include<iostream>
#include<string>
#include<vector> 

using namespace std;


class Veiculo{
    protected:
    string marca;
    int ano;

    public:
    Veiculo(string m, int a){
        marca = m;
        ano = a;
    }
    virtual void exibirDados(){
        cout << "Marca: " << marca << ", Ano: " << ano << endl;
    }
    virtual ~Veiculo(){}
};

class Carro : public Veiculo{
    public:
    int numPortas;

    Carro(string m, int a, int n) : Veiculo(m,a){
        numPortas = n;
    }
    void exibirDados() override{
        cout << "Marca: " << marca << ", Ano: " << ano << ", Numero de portas: " << numPortas << endl;
    }
};
class Moto : public Veiculo{
    public:
    int cilindradas;

    Moto(string m, int a, int c) : Veiculo(m,a){
        cilindradas = c;
    }

    void exibirDados() override{
        cout << "Marca: " << marca << ", Ano: " << ano << ", Cilindradas: " << cilindradas << endl;
    }
};

int main(){
    cout << "Heranca e Polimorfismo" << endl;
    vector<Veiculo*> garagem;
    garagem.push_back(new Carro("Volkswagen", 2015, 4));
    garagem.push_back(new Moto("Honda", 2018, 600));
    garagem.push_back(new Carro("Porsche", 2020, 2));
    for(size_t i = 0; i < garagem.size(); i++){
        garagem[i]->exibirDados();
    }
    for(size_t i = 0; i < garagem.size(); i++){
        delete garagem[i];
    }
    garagem.clear();
    
    return 0;
}