#include "textUtils.h"

/* INICIO DEL PROGRAMA */
int main()// main for testing pourposes
{
  char arreglochar[30] = "HOLA";
  char *ptrArregloMinus = mklowerstring(arreglochar,strlen(arreglochar));
  printf("original %s\n", arreglochar);
  printf("nuevo %s\n", ptrArregloMinus);
  
  return EXIT_SUCCESS;
}
