#include <iostream>
#include <string>


const int in = 2;
const int fin = 5;

void printarray(std::string &p, int n, int j);

int main(void)
{
  std::string palabra= "murcielago";

  printarray(palabra,in,fin);

  return 0;
}

void printarray(std::string &p, int n, int j)
{
  /* std::string residuo;
  
  for (int read = 0; read<j; read++)
    {
      if(p[n]!=p[j] and n!=j)
	{
	  std::cout<<p[n]<<"\n";
	  residuo[n] = p[j];
	  // std::cout<<residuo[n]<<"\n";
	  n++;
	  j--;
	}
      else
	{
	  std::cout<<p[n]<<"\n";
	}
    }
  
  if (p.length()%2 == 0)
    {
      for(int ii=0; ii<p.length()/2; ii++)
	{
	  std::cout<<residuo[4-ii]<<"\n";
	}
    }
  else
    {
      for(int ii=0; ii<p.length()/2 + 1; ii++)
	{
	  std::cout<<residuo[4-ii]<<"\n";
	}
	}*/
  if (j<p.length() and n>=0 and n<j)
    {
      
      for (int ii=n; ii<j+1; ii++)
	{
	  std::cout<<p[ii]<<"\t";
	}
      std::cout<<"\n";
    }
  else
    {
      std::cout<<"Parámetros inválidos, verificar"<<"\n";
    }
}
