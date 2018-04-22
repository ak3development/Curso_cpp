/*escriba un programa que detecte el mayor entre dos numeros */

#include <iostream>

int main () {

  int n1, n2;

  std::cout<<"ingresa dos numeros para comparar. >>";
  std::cin>>n1>> n2;

  if(n1 > n2)
    std::cout<<n1 <<" es mayor a "<< n2<<std::endl;

  else
    std::cout <<n2 <<" es mayor a "<< n1 << std::endl;


  return 0;
}
