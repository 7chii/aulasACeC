#include <iostream>
using namespace std;

//calcule o abono dado de um funcionario dado seu salario e tempo de casa || abono 10% menos de 10 anos e 25% mais de 10 anos!
int main(){
   int tempo;
   double sal, abono;
   string nome;

   cout<<"insira nome do funcionario: \n";
   cin>>nome;
   cout<<"insira salario de " <<nome<<": \n";
   cin>>sal;
   cout<<"insira tempo na empresa(em anos) de " <<nome<<": \n";
   cin>>tempo;
   if(tempo<=10){
    abono = sal*0.1;
   }else{
    abono = sal*0.25;
   }
   cout<<"funcionario "<< nome<<" tem abono de "<<abono; 
}