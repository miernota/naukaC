#include <stdio.h>

#include <inttypes.h> // dołancza <stdinit.h>


int main(void)
{

  printf("sizeof(float) = %zu\n", sizeof(float));
  printf("sizeof(double) = %zu\n", sizeof(double));
  printf("sizeof(long double) = %zu\n", sizeof(long double));
  printf("sizeof(unsigned int) = %zu\n", sizeof(unsigned int));
  
  // domyślnie wszystkie takie liczby są podwójnej precyzji (double)
  // wiec przyrostek f lub F nakazuje pojedyńczą precyzję
  // czyli float
  float  flo = .23e-5f;
  double dub = -1.56E+12;
  
  // to nowosc w C99, liczby zmiennoprzecinkowe zapisane
  // w postaci szesnastkowej tu zamiast f/F jest p/P
  // UWAGA! tu wykladnik jest potęgą 2 NIE 10 !!!!!!!!!!
  double dziwak = 0xa.1fp10;  
  printf("dziwak = %f, %e , %a\n",dziwak,dziwak,dziwak);
  long double ldub = .8E-5;
  printf("dub = %Lf , %Le , %La\n",ldub,ldub,ldub);
  
  return 0;
}
