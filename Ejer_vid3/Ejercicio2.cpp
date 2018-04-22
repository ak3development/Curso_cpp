/*1. Escribir un pograma que lea de la entrada estandar un valor de un producto
    y que devuelva como resultado ese valor con el iva incluido */

#include <iostream>

int main () {

    float numero1, iva = 0.19, resultado = 0, suma_iva = 0;

    std::cout<<"Ingresa el valor del producto: "<< std::endl;
    std::cin>> numero1;

    resultado = numero1 * iva;
    suma_iva = numero1 + resultado;


    std::cout<<"\nEl precio sin iva es de "<< numero1 << std::endl;
    std::cout<<"El nuevo valor con iva es de "<< suma_iva << std::endl;


return 0;
}
