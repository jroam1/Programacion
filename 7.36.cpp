#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>

void enletras(std::vector<int> &p);

int main(void)
{
  std::vector<int> cifra(10);
  
  std::cout<<"Ingrese digitos del 0 al 9"<<"\n";
  for (int ii=0; ii<10; ii++)
    {
      std::cin>>cifra[ii];
    }

  enletras(cifra);


  return 0;
}

void enletras(std::vector<int> &p)
{
  std::vector <int> numeros(10);
  std::string nombres[10];

  //Asignar a cada dígito su nombre

  for (int ii=0; ii<10; ii++)
    {
      numeros[ii] = ii;
    }

  /* std::stringstream zero;
  zero<<numeros[0];
  std::string cero = zero.str();

  std::stringstream one;
  one<<numeros[1];
  std::string uno = one.str();

  std::stringstream two;
  two<<numeros[2];
  std::string dos = two.str();

  std::stringstream three;
  three<<numeros[3];
  std::string tres = three.str();

  std::stringstream four;
  four<<numeros[4];
  std::string cuatro = four.str();

  std::stringstream five;
  five<<numeros[5];
  std::string cinco = five.str();

  std::stringstream six;
  six<<numeros[6];
  std::string seis = six.str();

  std::stringstream seven;
  seven<<numeros[7];
  std::string siete = seven.str();

  std::stringstream eigth;
  eigth<<numeros[8];
  std::string ocho = eigth.str();

  std::stringstream nine;
  nine<<numeros[9];
  std::string nueve = nine.str();*/

  nombres[0]= "cero";
  nombres[1] = "uno";
  nombres[2] = "dos";
  nombres[3] = "tres";
  nombres[4] = "cuatro";
  nombres[5] = "cinco";
  nombres[6] = "seis";
  nombres[7] = "siete";
  nombres[8] = "ocho";
  nombres[9] = "nueve";

  std::string letras[10];

  for (int ii=0; ii<10; ii++)
    {
      for (int jj=0; jj<10; jj++)
	{
	  if (p[ii]==numeros[jj])
	    {
	      letras[ii] = nombres[jj];
	    }
	  
	}
      
    }

  for(auto check:letras)
    {
      std::cout<<check<<"\t";
      std::cout<<"\n";
    }
  
}
