/*El ususario ingresara tres numero y debera comparar cual es el mayor y el mas pequeño*/

#include<iostream>

int main(){
int n1,n2,n3, max = 0, medi = 0, min = 0;

std::cout<<"Ingresa tres numero para comparar. \n<< ";
std::cin>>n1>>n2>>n3;

if(n1 >= n2 && n1 >= n3){
  max=n1;
  if(n2 >= n3){
    medi = n2;
    min = n3;
}
  else{
    medi = n3;
    min = n2;
  }}
else if(n2 >= n1 && n2 >= n3){
     max=n2;
     if(n1 >= n3){
      medi=n1;
      min = n3;
    }
    else{
      medi=n3;
      min=n1;
    }}

else if(n3 >= n1 && n3 >=n2){
     max=n3;
     if(n2 >= n1){
      medi=n2;
      min=n1;
    } else{
      medi=n1;
      min=n2;
    }}

std::cout<<"el maximo es "<<max<<"\n";
std::cout<<"el mediano es "<<medi<<"\n";
std::cout<<"el mas pequeño es "<<min<<"\n";

  return 0;
}
