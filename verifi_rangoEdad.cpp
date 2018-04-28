/* crea un programa que pida al usuario su edad y verifica si esta en el rango de 18 a 25 imprimiendo en la salida si 
esta en el rango o fuera de este*/

#include <iostream>

int main(){

	int edad;

	std::cout<<"Ingresa tu edad: ";
	std::cin>>edad;

	if(edad >= 18 && edad<=25){
		std::cout<<"estas en el rango de 18 a 25."<<std::endl;
	}

	else
		std::cout<<"estas fuera del rango."<<std::endl;

return 0;

}
