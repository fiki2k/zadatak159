// Program treba ispisat adresu polja pomocu pointera i dinamicke alokacije.

#include <stdio.h>

int main()
{
  char polje[] = "Nogomet";

  char *p = &polje[0];
  printf("\nAdresa prvog elementa u polju  : %p \n", p);

  p = polje;
  printf("\nAdresa cijelog polja: %p\n", p);

  return 0;
}
