#include <stdio.h>
#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;
//(ex 1 aula 4(eu acho q 4))desenv um prog que receba a massa e o volume de uma amorstra qualquer e calc sua densidade

void densVal(float mass, float vol){
    //funcao com formula recebendo valores de massa e volume
    float Dens;
    Dens = mass/vol;
    cout<< fixed << setprecision(2) <<"densidade igual a: "<<Dens;
}

int main(){
    float m, v;
    cout<<"insira val da massa a calc. :\n";
    scanf(" %d", &m);
    cout<<"insira val de volume a calc. :\n";
    scanf(" %d", &v);
    //funcao densidade
    densVal(m, v);
}