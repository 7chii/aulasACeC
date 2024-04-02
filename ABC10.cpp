#include <iostream>
using namespace std;
//recriar sequencia 7, 9, 4, 14, 8, 16, 28, 7, 64, 56, 6, 256 com if else

void func(int a, int b, int c,int exec, int num){
    if(exec<14){
        if(num=a){
            a=a*2;
            cout<<a<<endl;
            num=b;
        }else if(num=b){
            b=b-1;
            cout<<b<<endl;
            num=c;
        }else if(num=c){
            c=c*4;
            cout<<c<<endl;
            num=a;
        }
        exec=exec+1;
        func(a, b, c, exec, num);
    }else{
        cout<<endl;
    }
}

int main(){
    int exec = 0;
    int a = 7;
    int b = 9;
    int c = 4;
    int num = a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    func(a, b, c, exec, num);
}
