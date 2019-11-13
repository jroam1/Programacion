#include <iostream>
#include <vector>
#include <cstdlib>

const int ciudades=10;

void distanciatotal(std::vector<double> d);
void mayordistancia(std::vector<double> d);
void menordistancia(std::vector<double> d);
void distanciamedia(std::vector<double> d);

int main (void)
{
  std::vector<double> distancias(ciudades-1);
  
  //Inicializar el arreglo con distancias aleatorias
  
  for (int ii=0; ii<ciudades-1; ii++)
    {
      distancias[ii] = 1 + rand()%20;
    }
  // El ciclo muestra las distancias entre las ciudades

  for (auto dist: distancias)
    {
      std::cout<<dist<<"\n";
    }
  //Distancia total recorrida

  distanciatotal(distancias);
  // Mayor distancia entre ciudades

  mayordistancia(distancias);
  // Menor distancia entre ciudades

  menordistancia(distancias);
  // Distancia promedio entre ciudades

  distanciamedia(distancias);

  return 0;
}

void distanciatotal(std::vector<double> d)
{
  int recorrido=0;
  for (int ii=0; ii<ciudades-1; ii++)
    {
      recorrido = recorrido + d[ii];
    }
  
  std::cout<<"Distancia total recorrida "<<recorrido<<"\n"; 
}

void mayordistancia(std::vector<double> d)
{
  double max=0;
  for (int ii=0; ii<ciudades-1; ii++)
    {
      for (int jj=0; jj<ciudades-1; jj++)
	{
	  if (d[ii]<d[jj] and ii!=jj)
	    {
	      max = d[jj];
	      d[ii] = max;
	    }	  
	}
    }
  std::cout<<"La mayor distancia entre las ciudades es "<<max<<"\n";
}

void menordistancia(std::vector<double> d)
{
  double min=0;
  for (int ii=0; ii<ciudades-1; ii++)
    {
      for (int jj=0; jj<ciudades-1; jj++)
	{
	  if (d[ii]>d[jj] and ii!=jj)
	    {
	      min = d[jj];
	      d[ii] = min;
	    }	  
	}
    }
  std::cout<<"La menor distancia entre las ciudades es "<<min<<"\n";
}

void distanciamedia(std::vector<double> d)
{
  double recorrido=0;
  double promedio=0;
  for (int ii=0; ii<ciudades-1; ii++)
    {
      recorrido = recorrido + d[ii];
    }
  promedio = recorrido/(d.size());
  
  std::cout<<"Distancia promedio entre ciudades "<<promedio<<"\n";
}

