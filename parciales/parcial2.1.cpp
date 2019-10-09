#include <fstream>
#include <cmath>

double potential (double x);
double dev_central (double x, double h);
double dev_central_richardson (double x, double h);
double electricfield (double x, double h);

int main(void)
{
  std::ofstream fout("campo.txt");
  fout.precision(16); fout.setf(std::ios::scientific);

  for (double k = 0; k <= 2.5; k+=0.25)
    {
      fout << k << "\t"
	   << -(2*std::sin(k) + 2*k*std::cos(k)) << "\t"
	   << electricfield (k,0.02) << "\n";
    }
  fout.close();
  return 0;
  return 0;
}

double potential (double x)
{
  return 2*x*std::sin(x);
}

double dev_central (double x, double h)
{
  return (potential(x + h/2)-potential(x - h/2))/h;
}

double dev_central_richardson (double x, double h)
{
  return 4/3*(dev_central(x,h/2)) - 1/3*(dev_central(x,h));
}

double electricfield (double x, double h)
{
  return -(dev_central_richardson(x,h));
}

    


