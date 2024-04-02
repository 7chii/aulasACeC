#include <iostream>
using namespace std;
// dado um num qualquer determinar se ele eh neutro, pos, ou neg!
int main(void){
    float num;
    cout<<"entre numero: \n";
    cin>>num;
    string res = (num==0)?("NEUTRO"):((num>0)?("POSITIVO"):("NEGATIVO"));
    cout<<"numero: "<<res;
}
