#include <iostream>
#include <vector>
#include <cstdlib>

const int NTRY = 100;

int main (void)
{

  std::vector <int> results (6);

  for (int try=0; try < NTRY; try++)
    {
      results[ran()%6] +=1;
    }
  for (const auto & x: results)
    {
      std::cout<<x<<"\n";
    }
  return 0;
}
