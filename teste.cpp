#include <iostream>
#include <cmath>
#define PI 3.14159

using namespace std;
int main(){
    double raio, At, sec, tot;
    cout<<"informe raio p calc: "<<endl;cin>>raio;
//area triangulo eq
    At = ((raio*raio)*sqrt(3))/4;
    cout<<"area triang com lado: "<<raio<<endl<<" igual: "<<At<<endl;

//area secao -> area de um circulo de raio igual ao lado do triangulo, div por 6, sub triangulo
    sec = ((PI*(raio*raio))/6)-At;
    cout<<"area secao : "<<sec<<endl;

//6 secoes pequenas e 4 triangulos!
    tot = (sec*6)+(At*4);
    cout<< " valor total inters : "<< tot<< endl;

//area restante
    tot = ((PI*(raio*raio))*3)-tot;
    cout<<"area total circulos: "<<tot;

}