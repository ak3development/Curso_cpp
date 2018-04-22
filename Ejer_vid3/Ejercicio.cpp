/*1. Escribe un programa que lea de la entrada estandar dos numero y muestre
en la salida estandar la suma, resta, multiplicacion y division */

#include <iostream>

int main () {

    int numero1, numero2, multiplicacion = 0, division = 0, suma = 0, resta = 0;

    std::cout<<"Ingresa un numero: "<< std::endl;
    std::cin>> numero1;
    std::cout<<"Ingresa el segundo numero: "<< std::endl;
    std::cin>> numero2;
    
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    division = numero1 / numero2;
    multiplicacion = numero1 * numero2;
    
    std::cout<<"La suma es de "<< suma << std::endl;
    std::cout<<"La resta es de "<< resta << std::endl;
    std::cout<<"La multiplicacion es de "<< multiplicacion << std::endl;
    std::cout<<"La division es de "<< division << std::endl;


return 0;
}
