#include<iostream>

using namespace std;

int main(){
    float nota1,nota2,nota3,media;
    cout <<"Digite as 3 notas do aluno:"<< endl;
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    cout<< "Nota 3: ";
    cin >> nota3;
    media = (nota1+nota2+nota3)/3;
    cout << "A media do aluno corresponde a: "<<media<<endl;
    if(media>= 7.0){
        cout<< "Aluno Aprovado!"<<endl;
    }
        else if(media<7.0 && media>=3.0){
            cout<<"Voce precisa de recuperacao!"<<endl;
        }
        else{
            cout << "Aluno Reprovado!"<<endl;
        }
        return 0;
}
    