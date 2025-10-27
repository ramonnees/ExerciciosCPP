#include<iostream>
using namespace std;

int main(){
    cout <<"Tabuada" << endl;
    int num;
    cout <<"Digite o numero que voce deseja ver a tabuada: ";
    cin >> num;
    for(int i = 1; i<=10; i++){
        cout<< num << " x " << i << " = " << num *i << endl;
    }

    return 0;
}