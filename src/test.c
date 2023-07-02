#include "textUtils.h"

/* INICIO DEL PROGRAMA */
int main()// main for testing pourposes
{
  
  printf("%d\n",samecase('a','b'));//1
  printf("%d\n",samecase('a',' '));//-1
  printf("%d\n",samecase('a','A'));// 0

  putchar('\n');

  printf("%d\n", strsamecase("hola")); // 1
  printf("%d\n", strsamecase("1ola")); // -1
  printf("%d\n", strsamecase("hoLa")); // 0

  getchar();
  
  return EXIT_SUCCESS;
}
