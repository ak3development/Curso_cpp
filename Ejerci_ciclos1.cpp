/* Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar */

#include <iostream>

int main(){

	int numero;

	do{
		std::cout<<"Digite un numero: ";
		std::cin>>numero;
	}while((numero < 1) || (numero > 10));

	for(int i=1; i<=20; i++){
		std::cout<<numero<<" * "<<i<<" = "<<numero*i<<std::endl;
	 }

return 0;

}
