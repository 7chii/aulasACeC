#include <iostream>
using namespace std;
//recriar sequencia 7, 9, 4, 14, 8, 16, 28, 7, 64, 56, 6, 256 com if else

void func(int a , int b , int c, int exec){
    if(exec>0){
        cout<<a<<","<<b<<","<<c<<",";
        a=a*2;
        b=b-1;
        c=c*4;
        func(a, b, c, exec-1);
    }else{
        cout<<endl;
    }
}

int main(){
    int exec = 40;
    int a = 7;
    int b = 9;
    int c = 4;
    func(a, b, c, exec);
}
