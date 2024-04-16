#include <iostream>
using namespace std;
//k e n
void func(int k, int n){
    if(k>n){
        printf("numeros de %d a %d:\n",k,n);
        while(k>n){
            cout<<" "<<k;
            k=k-1;
        }
    }else if(k==n){
        int res = 1;
        for(int i=0;i<k;i++){
        res = (k-i) * res;
    }
        printf("fatorial de %d: %d",k, res);
    }else{
        printf("%d eh menor que %d", k,n);
    }
}
int main(){
    int k,n;
    cout<<"insira valor de K:\n";
    cin>>k;
    cout<<"\n"<<"insira valor de N:\n";
    cin>>n;
    func(k, n);
}