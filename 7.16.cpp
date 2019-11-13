#include <iostream>
#include <vector>
#include <cstdlib>

const int lanzamientos= 360000;

int main(void)

{
  srand(1);

  // Arreglo para guardar la suma del resultado de arrojar el dado. Cada casilla representa una cara del dado.

  std::vector <int> resultados(6);

  //Ciclo para revisar el funcionamiento de ran()

  std::vector <int> aleatorio(6);
  
  for (int ii=0; ii<6;ii++)
    {
      aleatorio[ii] = rand()%6;
    }

  for (auto valor: aleatorio)
    {
      std::cout<<valor<<"\t";
    }
  
  // El ciclo, genera valores aleatorios de 1 a 6 simulando el resultado del lanzamiento del dado. De modo que, el numéro que aparezca en cada casilla indica el número de veces que el dado arrojo dicho resultado. 

  
  for (int i = 0; i<lanzamientos; i++)
    {
      resultados[rand()%6] =  resultados[rand()%6] + 1; 
    }

  for(auto cara: resultados)
    {
      std::cout<<cara<<"\t";
    }
  
  return 0;
}
