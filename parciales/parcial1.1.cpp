#include <iostream>
#include <cmath>
//primos(m) arroja 1 si el número es primo, 0 si no es primo.

int primos(int m);
int fprimo_mayor(int m);

int main (void)
{
  std::cout<< primos(9) << " " << fprimo_mayor(9) <<std::endl;
  std::cout<< primos(97) << " " << fprimo_mayor(97) <<std::endl;
  std::cout<< primos(100) << " " << fprimo_mayor(100) <<std::endl;
  std::cout<< primos(12345) << " " << fprimo_mayor(12345) <<std::endl;
  std::cout<< primos(1000099) << " " << fprimo_mayor(1000099) <<std::endl;
  std::cout<< primos(5412345) << " " << fprimo_mayor(5412345) <<std::endl;
  std::cout<< primos(95412341) << " " << fprimo_mayor(95412341) <<std::endl;
  std::cout<< primos(35412347) << " " << fprimo_mayor(35412347) <<std::endl;
  std::cout<< primos(835412343) << " " << fprimo_mayor(835412343) <<std::endl;
  return 0;
}

int primos(int m)
{
  int si = 1;
  if (m==1)
    {
      return 0;
    }
  
  for (int k=2; k<=std::sqrt(m); ++k)
    {
      if (m%k==0)
	{
	  si = 0;
	  break;
	}
       
    }
  return si;
}

int fprimo_mayor(int m)
{
  int factor = 1;
  
  for (int k = 3; k<=m; k+=2)
    {
      if ( (m%k == 0) and (primos(k)==1))
	{
	  factor = k;
	}
    }
  return factor;
}

      

	
	
