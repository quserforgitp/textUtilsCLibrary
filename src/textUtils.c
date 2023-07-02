#include "textUtils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void strtoupper(char lowerCaseCharsArray[], size_t stringLength)
{
  for (size_t i = 0; i < stringLength; i++)
    if (lowerCaseCharsArray[i] >= 97 && lowerCaseCharsArray[i] <= 122)
      lowerCaseCharsArray[i] = toupper(lowerCaseCharsArray[i]);
}
char *mkupperstring(char const lowerCaseCharsArray[], size_t stringLength)
{
  char *ptrMayusculas = (char *) malloc( sizeof(char) * stringLength );
  
  for(size_t i = 0; i < stringLength; i++)
    ptrMayusculas[i] = toupper(lowerCaseCharsArray[i]);
  return ptrMayusculas;   
}
void strtolower(char upperCaseCharsArray[], size_t stringLength)
{
  for (size_t i = 0; i < stringLength; i++)
    if (upperCaseCharsArray[i] >= 41 && upperCaseCharsArray[i] <= 90)
      upperCaseCharsArray[i] = tolower(upperCaseCharsArray[i]);
}
char *mklowerstring(char const upperCaseCharsArray[], size_t stringLength)
{
  char *ptrMinusculas = (char *) malloc( sizeof(char) * stringLength );
  
  for(size_t i = 0; i < stringLength; i++)
    ptrMinusculas[i] = tolower(upperCaseCharsArray[i]);
  return ptrMinusculas;
}

int
samecase (char a, char b)
{
  // si aunque los cambies, siguen siendo iguales, entonces no son letras (-1)
  if ( toupper(a) == tolower(a) || toupper(b) == tolower(b) )
  {
    return -1;   
  }
  // // si son ambos minus o ambos mayus entonces es verdad que son samecase (1)
  if ( (a == tolower(a) && b == tolower(b)) || (a == toupper(a) && b == toupper(b)) )
  {
    return 1;
  }
  // si no se cumplio ninguna de las condiciones enteriores entonces no son samecase (0)
  else return 0;
}

int
strsamecase ( char string[] )
{
    for ( int i = 0; i < (int)strlen(string) - 1; i++ )
    {
        int sonMismoTipo = samecase(string[i], string[i+1]);
        
        if(!sonMismoTipo || sonMismoTipo == -1)
        {
          if ( samecase(string[i], string[i+1]) == -1 ) return -1;// algun caracter no es letra
            else return 0;// no son samecase
        }
    }
    return 1;// todos los caracteres son letras y son samecase
}