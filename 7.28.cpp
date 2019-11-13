#include <iostream>
#include <cstring>

void palindroma(char p[30]);


int main(void)
{
  char palabra[30];

  std::cout<<"Inserte una palabra"<<"\n";
  std::cin>>palabra;

  palindroma(palabra);
  std::cout<<"\n";

  return 0;
}


void palindroma(char p[30])
{
  char copia[30];
  
  for (int i = strlen(p)-1; i>=0; i--)
    {
      copia[strlen(p)-1-i] = p[i];
    }

  copia[strlen(p)] = '\0';
  
  std::cout<<copia<<"\n";

  if (strcmp(p,copia)==0)
    {
      std::cout<<"la palabra es palindroma !!"<<"\n";
    }
  else
    {
      std::cout<<"la palabra no es palindroma :( "<<"\n";
      }
}

