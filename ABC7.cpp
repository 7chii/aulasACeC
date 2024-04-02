#include <iostream>
//aula 6 exemplo em sala salario abono
using namespace std;
int main(void){
    float tempo, salario;
    cout <<"Entre com o salario!: \n";
    cin>> salario;
    cout << "Entre com o tempo: \n";
    cin>>tempo;
    int sal = salario;
    if (tempo>1){
        if (tempo<10){
            salario = 1.1*salario;
        }else {
            salario = 1.25*salario;
        }
    }
    float tes = (tempo>1)?((tempo<10)?(sal*1.1):(sal*1.25)):(0);
    cout<<"salario com abono: "<<salario<<endl;
    cout<<"salario com abono(2): "<<tes<<endl;
}