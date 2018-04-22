#include <iostream>

int main(){

  int dato = 5, numero;

  std::cout<<"ingresa un numero no mayor a 10\n";
  std::cin >> numero;

  if(numero >= dato)
    std::cout<<"tu numero es mayor a cinco"<<std::endl;

  else
    std::cout<<"tu numero es menor a 5"<<std::endl;

  return 0;
}
