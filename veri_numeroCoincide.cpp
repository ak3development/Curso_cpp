/*Escribe un programa que lea de la entrada estandar tres numeros.Despues debe leer un cuarto numero
e indicar si el numero coincide con alguno de los introducidos anteriormente*/

#include <iostream>

int main(){

	int a,b,c,comp;

	std::cout<<"Ingresa tres numeros.\n<< ";
	std::cin>>a>>b>>c;

	std::cout<<"Ingresa tu numero a comparar.\n<<  ";
	std::cin>>comp;

	if(a == comp)
		std::cout<<"Tu numero coincide con el primero introducido."<<std::endl;

	else if(b == comp)
		std::cout<<"Tu numero coincide con el segundo introducido."<<std::endl;

	else if(c == comp)
		std::cout<<"Tu numero coincide con el tercer numero introducido."<<std::endl;

	else
		std::cout<<"El numero no coincide con ningunio introducido anteriormente.\n"<<std::endl;



return 0;

}
