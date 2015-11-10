#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

int main(){
complex<double> z0;
double rez;
double imz;
double skip = 1.0 * exp(-8);

  for (double re= -2; re <= 2; re +=0.01) {
    for (double im = -2; im <= 2; im +=0.01) {
      z0 = complex<double>(re, im);
      complex<double> zn = z0 - (((z0*z0*z0)-1.0)/(3.0 * (z0*z0)));
     
      rez = real(z0);
      imz = imag(z0);

	
      double diffz = abs(zn-z0);
      int i = 1;
      while ((diffz > skip) and (i <= 399)) {
        i++;
        z0 = zn;
        zn = z0 - (((z0*z0*z0)-1.0)/(3.0 * (z0*z0)));
        diffz = abs(zn-z0);
      }
      
      
      cout << rez << "\t" << imz << "\t" << i <<endl;

    }
  }

  return 0;
}
