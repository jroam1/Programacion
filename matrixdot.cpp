#include <iostream>
#include <vector>

double matrix_dot(const std::vector <double> &A, int m, int n, const std::vector <double> &B, int p, int q);
  
void print(const std::vector <double> &M, int m , int n);

int main (void)
{
  const int m=4;
  const int n=6;
  std::vector <double> M(m*n);
  const int p=4;
  const int q=4;
  std::vector <double> N(p*q);

  for(int ii=0; ii < m; ++ii)
    {
    for(int jj=0; jj < n; ++jj)
      {
      M[ii*n+jj] = ii*n + jj;  
      }
    }
  std::cout<< " Matriz M"<<"\n"; 
  print (M,m,n);
  
  for(int ii=0; ii < p; ++ii)
    {
    for(int jj=0; jj < q; ++jj)
      {
      N[ii*q+jj] = ii*q + jj;  
      }  
    }
  std::cout<< " Matriz N"<<"\n";
  print (N,p,q);

  matrix_dot(M,m,n,N,p,q);

  return 0;
}

double matrix_dot( const std::vector <double> &A, int m, int n, const std::vector <double> &B, int p, int q)
{
 std::vector <double> C (m*q);
 double c = 0.0;
  if (n != p)
    {
       std::cout<<" Las matrices no se pueden multiplicar "<<"\n";
    }
  else
    {
      
      std::cout << " Matriz M*N"<<"\n";
      for (int ii=0; ii<m; ii++)
	{
	  for (int jj=0; jj<q; jj++)
	    {
	      for (int kk=0; kk<n; kk++)
		{
		  //std::cout<<A[ii*n + kk]<<"\n";
		  
		  //std::cout<<B[kk*q + jj]<<"\n";
		  c = c + A[ii*n + kk]*B[kk*q + jj];
		  
		  //std::cout << c << "\n";
		  C[ii*q + kk] = c;
		}
	      //std::cout <<c<< "\n";
	      C[ii*q + jj] = c;
	      std::cout<< C[ii*q + jj]<<"   ";
	      c = 0;
	    }
	   std::cout << "\n";
	}
    }
}

void print(const std::vector <double> &M, int m , int n)
{
  for(int ii=0; ii < m; ++ii){
    for(int jj=0; jj < n; ++jj){
      std::cout << M[ii*n +jj] << "   ";
    }
    std::cout << "\n";
  }
}
