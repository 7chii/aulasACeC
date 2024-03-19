#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
//ex 2 aula 4 media aritmetica 4 notas
void medVal(float n1, float n2,float n3,float n4){
    float totVal = (n1 + n2 + n3 + n4)/4;
    cout<< fixed << setprecision(2) <<"\nmedia = "<<totVal;
}
int main(){
    float a, b, c, d;
    cout<<"insira primeira nota: \n";cin>>a;
    cout<<"\ninsira segunda nota: \n";cin>>b;
    cout<<"\ninsira terceira nota: \n";cin>>c;
    cout<<"\ninsira quarta nota: \n";cin>>d;
    medVal(a, b, c, d);

}