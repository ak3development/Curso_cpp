#include<iostream>

int main() {

  int numero;

  std::cout<<"ingresa un numero del 1 al cinco\n<< ";
  std::cin>>numero;

  switch (numero){

    case 1:
        std::cout<<"opcion 1"<<std::endl;
      break;

    case 2:
      std::cout<<"opcion 2"<<std::endl;
    break;

    default:
      std::cout<<"numero fuera de rango\n"<<std::endl;
}
  return 0;
}
