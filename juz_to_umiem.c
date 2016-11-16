//-------------------------------------------------------------------
#include <stdio.h>
#include <stdint.h>   // dla nazw typów zastępczycz np. int_fast8_t

#include <limits.h>   // dla limitów
//-------------------------------------------------------------------
void funkcja(void);
void rysuj_linie_poziomo(void);
//-------------------------------------------------------------------
int main(void)
{
  printf("Naciśnij jakiś klawisz i potwierdź enterem.\n");
  int klawisz = getchar();
  
  printf("Ostatni klawisz to : %d\n", klawisz);

  rysuj_linie_poziomo();
  funkcja();	  
  rysuj_linie_poziomo();
  
  float ciezar = 0.0, wartosc = 0.0;
  printf("Podaj swoj ciezar w kg: ");
  scanf("%f", &ciezar);
  wartosc = 4034.0 * ciezar;
  printf("Wartosc = %.2f\n", wartosc);
  rysuj_linie_poziomo();

  // sz1 i sz2 - szesnastkowy
  // use - osemkowy	
  int sz1 = 0XF0, sz2 = 0xF1, use = 071;
  // # - dodaje do liczby przedrostek : 0x lub 0X 
  //     zalezy od tego czy %x czy %X 
  printf("sz1 = %#X, sz2 = %#x, use = %#o\n", sz1, sz2, use);

  // wielkosci poszczegolnych typow
  // %z - specjalny kwalifikator dla typu: size_t
  printf("CHAR_BIT = %d\n", CHAR_BIT); //ile bitów w jednym bajcie , jesli bedzie <>8 to sie zdziwie
  // sizeof() zwraca ilosc bajtow jako dlugosc
  printf("sizeof(short int) = %zu\n", sizeof(short int)); 
  printf("sizeof(int) = %zu\n", sizeof(int));
  printf("sizeof(long int) = %zu\n", sizeof(long int));
  printf("sizeof(long long int) = %zu\n", sizeof(long long int));
  printf("sizeof(unsigned short) = %zu\n", sizeof(unsigned short));
  printf("sizeof(unsigned) = %zu\n", sizeof(unsigned));
  printf("sizeof(unsigned long) = %zu\n", sizeof(unsigned long));
  printf("sizeof(unsigned long long) = %zu\n", sizeof(unsigned long long));
  printf("sizeof(float) = %zu\n", sizeof(float));
  printf("sizeof(char) = %zu\n", sizeof(char));
  
  
  // przyrostki u, l, ll, mogą być pisane duzymi literami
  // rowniez kolejnosc moze byc zamieniona np: 2ULL i 2LLU to jedno i to samo	
  unsigned ui = 124u; // to jest int
  ui =3000000000U;
  int long lon1 = 129l; // kolejnosc long / unsigned /int nie ma znaczenia
  lon1= 301L;
  long long unsigned udwalongi = 144ull; // to tez jest int
  udwalongi = 1444444LLU;
 
  // UWAGA ! dla int -> %d , dla unsigned int -> %u
  // przy np. %x zastepuje %u
  // h przed d lub u oznacza short
  printf("ui = %u, lon1 = %ld, udwalongi=%#llx, maly = %hu\n" 
         ,ui ,lon1, udwalongi, maly);

  //czysta moja hipoteza
  //short     - 8-bitow min
  //int       - 16-bity min. najlepiej dopasowany do maszyny
  //long      - 32-bity min.
  //long long - 64 bity min.
  // FF                byte - zakres od 0 -> 255 (256 mozllwosci) 
  // FFFF              short(2)
  // FFFFFFFF          int(4)
  // FFFFFFFFFFFFFFFF  long(8) i long long(8)

  char znak = '\xFF';
  printf("Podaj znak i nacisnij ENTER : ");
  scanf("%c", &znak);
  printf("Kod znaku %c = %d\n", znak, znak);

  // w C nie ma bool ani true ani false (heh)
  _Bool typLogiczny = 1; 
  
  // grupa typów z dokładnie określoną ilościa bitów:
  int32_t        int_32_ze_znakiem = 0;
  // grupa typów z minimalną ilościa bitów:
  int_least8_t   int_przynajmniej_8 = 0;
  // grupa typów z najszybszym typem o tej wielkości
  int_fast8_t    int_szybkie_typy = 0;

  return 0;	
}

//-------------------------------------------------------------------

void funkcja(void)
{
  printf("to jest tekst z funkcji\n");	
}


void rysuj_linie_poziomo(void)
{
  printf("-------------------------------------------\n");
}
//-------------------------------------------------------------------
