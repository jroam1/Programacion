#include <iostream>
int main(void)
{
  double x,y;
  
  std::cout<<"Cúantas millas en kilometros recorreras? : "<<std::endl;
  std::cin>>x;
  y = x*1.609;
  std::cout << "Recorreras... " << y << "km"<<std::endl;
  
  return 0;
}
