#include <iostream>
#include <string>

int main (void)
{
  double Var1;
  double Var2;
  std::cout<< "Inserte dos n�meros enteros cualesquiera, por favor"<< std::endl;
  std::cout<< "N�mero 1:"<< std::endl; 
  std::cin>>Var1;
  std::cout<< "N�mero 2:"<< std::endl;
  std::cin>>Var2;
  int Suma;
  int Resta;
  int Producto;
  double Razon;
  Suma = Var1 + Var2;
    std::cout<< "La suma es:"<<Suma<< std::endl;
  Resta = Var1 - Var2;
    std::cout<< "La resta es:"<<Resta<< std::endl;
  Producto = Var1 * Var2;
    std::cout<< "El producto es:"<<Producto<< std::endl;
  Razon = Var1/Var2;
    std::cout<< "La raz�n es:"<<Razon<< std::endl;
    if (Resta > 0){
      std::cout<< Var1 << "es mayor que" << Var2<< std::endl;
	}
    if (Resta < 0){
      std::cout<< Var2 << "es mayor que" << Var1<< std::endl;
	}
     if (Resta == 0){
       std::cout<<"Los n�meros son iguales !! "<< std::endl;
	}
  return 0; 
}  
