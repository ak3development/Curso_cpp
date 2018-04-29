/*Beta de un cajero virtual en donde el usuario empieza con 1000 dolares*/

#include <iostream>

int main(){

	int saldo = 1000, retiro = 0, opc, deposito;

	std::cout<<"\tBienvenido al cajero virtual."<<std::endl;
	std::cout<<"\tElija la opcion que decea realizar."<<std::endl;
	std::cout<<"\t1.Ingreso de dinero."<<std::endl;
	std::cout<<"\t2.Retiro de dinero."<<std::endl;
	std::cout<<"\t3.Salir"<<std::endl;
	std::cin>>opc;

	switch(opc){

		case 1:
			std::cout<<"Ingrese el monto a depositar. << ";
			std::cin>>deposito;
			saldo += deposito;
			std::cout<<"tu nuevo saldo es "<< saldo <<std::endl;
			break;
		case 2:
			std::cout<<"Ingrese el monto a retirar. << ";
			std::cin>>retiro;

			if(retiro > saldo)
				std::cout<<"No cuentas con ese saldo."<<std::endl;

			else
				std::cout<<"Retirado "<< retiro <<" desde tu cuenta"<<std::endl;
				saldo -= retiro;
				std::cout<<"Tu nuevo saldo es de "<< saldo <<std::endl;
			break;

		case 3:
			break;

	}


return 0;

}
