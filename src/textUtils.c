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
