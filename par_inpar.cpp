/*verificar si un numero es para o inpar*/
#include<iostream>

int main(){
  int numero = 0;

  std::cout<<"ingrese un numero a evaluar . << ";
  std::cin>>numero;

  if(numero == 0)
    std::cout<<"el numero es cero"<<std::endl;

  else if(numero % 2 == 0)
    std::cout<<"El numero es par"<<std::endl;

  else
    std::cout<<"el numero es inpar"<<std::endl;




  return 0;
}
