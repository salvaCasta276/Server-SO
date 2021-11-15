#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double randn(double mu, double sigma);

int main(){
    for(int i = 0; i < 300; i++) printf("%g  ", randn(0, 1));
}

double randn(double mu, double sigma)
{
  double U1, U2, W, mult;
  double X1, X2;
  int call = 0;
 
  if (call == 1)
    {
      call = !call;
      return (mu + sigma * (double) X2);
    }
 
  do
    {
      U1 = -1 + ((double) rand() / RAND_MAX) * 2;
      U2 = -1 + ((double) rand() / RAND_MAX) * 2;
      W = pow(U1, 2) + pow(U2, 2);
    }
  while (W >= 1 || W == 0);
 
  mult = sqrt((-2 * log(W)) / W);
  X1 = U1 * mult;
  X2 = U2 * mult;
 
  call = !call;
 
  return (mu + sigma * (double) X1);
}
