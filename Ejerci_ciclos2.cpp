/* Realice un programa que lea de la entrada estamdar numeros hasta que se introduzca un cero.
   En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores
   mayores que cero leidos.*/

#include <iostream>

int main() {

	int numero, counter = 0;

	do{
		std::cout<<"Ingresa un numero: ";
		std::cin>>numero;
		counter++;
	}while(numero != 0);

	std::cout<<"La cantidad de numeros ingresados hasta que se presiono cero fue "<<counter - 1<<std::endl;




return 0;
}
