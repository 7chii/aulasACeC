#include <iostream>
using namespace std;
//fatorial de numero dado
int main(){
    int ent, res;
    int i=0;
    res = 1;
    cout<<"insira numero: \n";
    cin>>ent;
    printf("fatorial de %d = \n",ent);
    for(int i=0;i<ent;i++){
        res = (ent-i) * res;
    }
    printf("%d",res);
}