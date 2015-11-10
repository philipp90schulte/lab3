#include <iostream>
#include <complex>
#include <cmath>

using namespace std

;
/*
Function to iterate the compley number array of Phi

*/
complex<double>calcz(double cphi, complex<double> cunit) {
  complex<double> cz;

  cz = tan(cphi + (cphi * cunit));

  return cz;

}

double realz(complex<double> cz) {

   return real(cz);
}

double imagz(complex<double> cz) {

   return imag(cz);

}

double absolutez(complex<double> cz) {

   return abs(cz);
}


int main(){

// Declaration of used vars:
complex<double> ii = complex<double>(0.0, 1.0); // complex unit
int N= 20;  //Number of itertions

  /* cout << "Which N?: ";
  cin >> N;
*/

complex<double> z[N];
double phi[N];
double rez[N];
double imz[N];
double absz[N];
double phi0 = (-1 * M_PI);
double dphi = (2* M_PI) / (N-1);  // Delta Phi

    
  for (int i=0; i<= N-1; i++) {
    phi[i] = phi0 + (i * dphi);
    z[i] = calcz(phi[i], ii);
    rez[i] = realz(z[i]);
    imz[i] = imagz(z[i]);
    absz[i] = absolutez(z[i]);
    cout << phi[i] << "		" << z[i] << "	" << rez[i] << "	" << imz[i] << "	" << absz[i] <<  endl;

  }


  // Example how to declare a single complex variable:
  complex<double> c;

  // d = 1 + 2i 
  complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
