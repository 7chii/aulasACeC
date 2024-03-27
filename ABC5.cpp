#include <iostream>
using namespace std;
//formatacao 1
int main(){
    float HT, VH, PD, TD, SB, SL;
    cout<<"entre com a quant. de horas trabalhadas: \n";cin>>HT;
    cout<<"entre com o valor da hora de trabalho: \n";cin>>VH;
    cout<<"entre com o valor do percentual de desconto: \n";cin>>PD;

    SB = HT*VH;
    TD = (PD/100)* SB;
    SL = SB - TD;
    cout<<"o salario bruto: "<<SB<<endl;
    cout<<"\nDESCONTO: "<< TD<<endl;
    cout<<"\nsal liquido: "<<SL<<endl;
    system("pause");
    return 0;
}