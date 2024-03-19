#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//ex 3 construa um alg que tendo dois pontos qualquer no plano P(x1, y1) e Q(x2, y2), imprima a dist entre eles
//dist = sqrt((x2-x1)^2+(y2-y1)^2)
void distVal(int x, int y, int a, int b){
    int dist = sqrt(((a - x)*(a - x))+((b - y)*(b - y)));
    cout<< fixed << setprecision(2) <<"distancia entre os pontos inseridos eh : "<<dist;
}
int main(){
    int x1, x2, y1, y2;
    cout<<"insira X do ponto P: \n";cin>>x1;
    cout<<"insira Y do ponto P: \n";cin>>y1;
    cout<<"insira X do ponto Q: \n";cin>>x2;
    cout<<"insira Y do ponto Q: \n";cin>>y2;
    distVal(x1,y1,x2,y2);
}