#include <iostream>
using namespace std;
//ex 1 alturas basquete
int somar(int vec[], int ele){
    int res=0;
    for(int i=0;i<ele;i++){
        res=res+vec[i];
    }
    return res;
}
int main(){
    int jog[5]= {185, 201, 188, 195, 176};
    int ele;
    cout<<"ate qual elemento ?"<<"\n";
    cin>>ele;
    int soma = somar(jog, ele);
    printf("soma do vetor(ate a posicao %d): \n%d",ele, soma);
}