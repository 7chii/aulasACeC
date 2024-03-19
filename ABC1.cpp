#include <iostream>
//puzzle logico exemplo em aula
using namespace std;
void valtest(int numt, int G, int C, int P, int T, string nome){
       if(numt==C){cout<<nome<<" vive com um cachorro no andar: "<<numt<<"\n";}
        else if(numt == T) {cout<<nome<<" vive com uma tartaruga no andar: "<<numt<<"\n";}
            else if(numt==P){cout<<nome<<" vive com um passarinho no andar: "<<numt<<"\n";}
                else if(numt==G){cout<<nome<<" vive com um gato no andar: "<<numt<<"\n";}
                    else{cout<<nome<<"error!";}
};
int main(){
    int J, Y, K, B, 
    G, C, P, T;
    //enunciado
    J = !4;
    K = !2;
    B = !4;
    T = 3;
    if(J!=4 && K!=2){
        //se Joana nao pode 4 andar && Kelly nao pode 2 andar com passarinho && Joana esta 1 andar acima de kelly
        //-> Joana nao pode 3 andar -> joana 2 andar && kelly 1 andar
        K = 1;
        J = K + 1;
        P = K;
    }if(B!=4&&K==1){
        B = 3;
        C = 4;
        //andares com animal/pessoa restantes
        G = 2;
        Y = 4;
    }
    valtest(K, G, C, P, T, "kelly");
    valtest(Y, G, C, P, T, "yara");
    valtest(J, G, C, P, T, "joana");
    valtest(B, G, C, P, T, "bete");
}
