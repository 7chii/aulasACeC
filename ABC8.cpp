#include <iostream>
using namespace std;
//case switch especies e regioes
int main(){
    int gen;
    cout<<"entre tipo genetico(1a8): \n";
    cin>>gen;
    switch (gen)
    {
    case 1:
        cout<<"SUL";
        break;
    case 2:
        cout<<"NORTE";
        break;
    case 3:
        cout<<"LESTE";
        break;
    case 4:
    case 5:
    case 6:
    case 7:
        cout<<"OESTE";
        break;
    default:
        cout<<"EXOTICA";
        break;
    }
}