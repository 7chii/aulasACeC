#include <iostream>
using namespace std;
//fibonacci
void func(int a, int b, int cas){
   if(cas>0){
       int c = a + b;
       cout<<a<<","<<b<<","<<c<<endl;
       a = b;
       b = c;
       func(a, b, cas-1);
   }else{
    cout<<"fim";
   }
}

int main(){
int a = 0;
int b = 1;
int cas;
cout<<"insira vezes da sequencia: \n";
scanf(" %d", &cas);
func(a, b, cas);
}