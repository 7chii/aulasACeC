#include <iostream>
//aula 6
using namespace std;
int main(void){
    float tempo, salario;
    cout <<"Entre com o salario!: \n";
    cin>> salario;
    cout << "Entre com o tempo: \n";
    cin>>tempo;
    if (tempo>1){
        if (tempo<10){
            salario = 1.1*salario;
        }else {
            salario = 1.25*salario;
        }
    }
    cout<<"salario com abono: "<<salario<<endl;
}