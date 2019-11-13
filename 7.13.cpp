#include <iostream>
#include <vector>


const int n_datos = 4;
const int max = 100;
const int min = 10;

int main(void)
{
  std::vector <double> numeros;

  int num;
  
  for (int read=0; read < n_datos; read++)
    {
      std::cin>>num;

      if (min<= num and num <= max)
	{
	  bool guardar = true;
	  for(auto & dato: numeros)
	    {
	      if (dato == num)
		{
		  guardar = false;
		  break;
		}
	    }
	  if (true == guardar)
	    {
	      numeros.push_back(num);
	    } 
	}
    }

  for (auto & dato: numeros)
    {
      std::cout<<dato<<"\t";
    }
  return 0;
}
