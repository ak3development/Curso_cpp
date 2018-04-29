//Crear un menu que considere 
//caso 1:Cubo de un numero.
//caso 2:Numero par o impar.
//caso 3:salir

#include <iostream>

int main(){

        int numero, numero_cubo, opc;

        std::cout<<"\tBienvenido al Menu."<<std::endl;
        std::cout<<"\tElija la opcion que decea realizar."<<std::endl;
        std::cout<<"\t1.Calcular el Cubo de un numero."<<std::endl;
        std::cout<<"\t2.Verificar si un numero es par o impar."<<std::endl;
        std::cout<<"\t3.Salir"<<std::endl;
        std::cin>>opc;

        switch(opc){

		case 1:
			std::cout<<"Ingresa tu numero. \n<< ";
			std::cin>>numero_cubo;
			numero_cubo *=(numero_cubo * numero_cubo);
			std::cout<<"Tu numero al cubo es "<<numero_cubo<<std::endl; 
			break;

		case 2:

			std::cout<<"ingrese un numero a evaluar . << ";
  			std::cin>>numero;

  			if(numero == 0)
    			std::cout<<"el numero es cero"<<std::endl;

  			else if(numero % 2 == 0)
    				std::cout<<"El numero es par"<<std::endl;

  			else
    				std::cout<<"el numero es inpar"<<std::endl;
			break;

		case 3:
			break;

	}

return 0;

}
