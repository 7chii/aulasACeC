#include <iostream>
#include <iomanip>
//formatacao 2
using namespace std;
int main(){
    float HT, VH, PD, TD, SB, SL;
    cout<<setprecision(2);
    cout<<setiosflags(ios::right);
    cout<<setiosflags(ios::fixed);
    cout<<"entre com a quant. de horas trabalhadas: \n";cin>>HT;
    cout<<"entre com o valor da hora de trabalho: \n";cin>>VH;
    cout<<"entre com o valor do percentual de desconto: \n";cin>>PD;

    SB = HT*VH;
    TD = (PD/100)* SB;
    SL = SB - TD;
    cout<<"o salario bruto: "<< setw(8)<<SB<<endl;
    cout<<"\nDESCONTO: "<< setw(8)<< TD<<endl;
    cout<<"\nsal liquido: "<<setw(8)<<SL<<endl;
    system("pause");
    return 0;
}