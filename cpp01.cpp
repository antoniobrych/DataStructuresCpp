#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

long double calcIMC(long double height,long double weight){

  return (weight/pow(height,2));

}
int main(void)
{
  long double height=1.78;
  long double weight = 64;
  long double imc = calcIMC(height,weight);
  std::cout << "IMC = " << imc<<"\n";
  if(imc < 17.0){
    std::cout << "Muito abaixo do peso";
  }
  else if ((imc >=17)&&(imc<18.5))
  {
    std::cout << "Abaixo do peso";
  }
  else if ((imc >=18.5)&&(imc<25))
  {
    std::cout << "Peso Normal";
  }
  else if ((imc >=25)&&(imc<30))
  {
    std::cout << "Acima do peso";
  }
  else if ((imc >=30)&&(imc<35))
  {
    std::cout << "Obesidade";
  }
  else if ((imc >=35)&&(imc<40))
  {
    std::cout << "Obesidade Severa";
  }
  else{
    std::cout << "Obesidade mórbida";
  }
    return 0;
}
