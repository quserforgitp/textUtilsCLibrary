#ifndef TEXT_UTILS_H
#define TEXT_UTILS_H

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>



/* LOWERCASE -> UPPERCASE */
void strtoupper(char lowerCaseCharsArray[], size_t stringLength);
char *mkupperstring(char const lowerCaseCharsArray[], size_t stringLength);

/* UPPERCASE -> LOWERCASE */
void strtolower(char upperCaseCharsArray[], size_t stringLength);
char *mklowerstring(char const upperCaseCharsArray[], size_t stringLength);



/* RE-ARRANGE STRING */
//invierte una cadena de caracteres
void strrevert(char stringArray[], size_t stringLength);
char *mkstrrevert(char const upperCaseCharsArray[], size_t stringLength);
//elimina espacios en blanco al inicio y al final del string
void strtrim(char stringArray[], size_t stringLength);
char *mkstrtrim(char const stringArray[], size_t stringLength);
//Reemplaza todas las ocurrencias de una subcadena por otra en una cadena dada
void strreplace(char stringArray[], size_t stringLength, char cadenaReemplazo[], char cadenaAreemplazar);
char *mkstrreplace(char const stringArray[], size_t stringLength, char cadenaReemplazo[], char cadenaAreemplazar);

/**
 * Compara dos caracteres para determinar si están en el mismo caso.
 *
 * @param a - El primer carácter a comparar.
 * @param b - El segundo carácter a comparar.
 * @return int - Devuelve -1 si ambos caracteres no son letras, 1 si están en el mismo caso (ambos minúsculas o ambos mayúsculas), y 0 en caso contrario.
 */
int samecase (char a, char b);


/**
 * Verifica si una cadena de caracteres está compuesta exclusivamente por caracteres del mismo caso.
 *
 * @param string - La cadena de caracteres a verificar.
 * @return int - Devuelve -1 si algún caracter no es una letra, 0 si la cadena contiene caracteres de diferentes casos y 1 si todos los caracteres son letras y están en el mismo caso.
 */
int strsamecase(char string[]);


// Divide una cadena en subcadenas basadas en un delimitador
void strsplit(char stringArray[],size_t stringLength, char delimitador);
char **mkstrsplit(char const stringArray, size_t stringLength, char delimitador);

// Concatena varias cadenas en una sola separadas por un delimitador
void strjoin();
char ** mkstrjoin();

// Convierte la primera letra de cada palabra en mayuscula
void strcapitalize();
char ** mkstrcapitalize();

//Verifica si la cadena contiene solo caracteres numericos
bool strisnumeric();

//Verifica si la cadena contiene solo caracteres alfabeticos
bool strisalpha();

//Verifica si la cadena contiene solo caracteres alfanumericos
bool strisalphanumeric();

// Elimina todas las ocurrencias de un caracter especifico en una cadena
void strremove(char *arregloStrings[], size_t longitudString, char caracterObjetivo);

#endif
