# LIBRERIA textUtils

## BREVE

La librería textUtils proporciona funciones para manipular cadenas de caracteres en C (de momento).

## FUNCIONES

# void strtoupper(char lowerCaseCharsArray[], size_t stringLength)

- Esta función recibe un array de caracteres en minúscula 
lowerCaseCharsArray y su longitud stringLength. Convierte cada letra 
minúscula en el array en su correspondiente letra mayúscula utilizando 
la función toupper(). La función modifica directamente el array 
lowerCaseCharsArray original.

  - Parametros:
    - lowerCaseCharsArray: Array de caracteres en minúscula.
    - stringLength: Longitud del array.

# char *mkupperstring(char const lowerCaseCharsArray[], size_t stringLength)

- Esta función recibe un array de caracteres en minúscula 
lowerCaseCharsArray y su longitud stringLength. Crea un nuevo array de 
caracteres en mayúscula utilizando la función toupper() y lo devuelve 
como resultado. El array original lowerCaseCharsArray no se modifica.

  - Parametros:
    - lowerCaseCharsArray: Array de caracteres en minúscula.
    - stringLength: Longitud del array.
  - Retorno:
    - char *: Puntero al nuevo array de caracteres en mayúscula. El puntero debe liberarse con free() cuando ya no se necesite.
    
# void strtolower(char upperCaseCharsArray[], size_t stringLength)

- Esta función recibe un array de caracteres en mayúscula 
upperCaseCharsArray y su longitud stringLength. Convierte cada letra 
mayúscula en el array en su correspondiente letra minúscula utilizando 
la función tolower(). La función modifica directamente el array 
upperCaseCharsArray original. 
  - Parametros:
    - upperCaseCharsArray: Array de caracteres en mayúscula.
    - stringLength: Longitud del array.

# char *mklowerstring(char const upperCaseCharsArray[], size_t stringLength)

- Esta función recibe un array de caracteres en mayúscula 
upperCaseCharsArray y su longitud stringLength. Crea un nuevo array de 
caracteres en minúscula utilizando la función tolower() y lo devuelve 
como resultado. El array original upperCaseCharsArray no se modifica.

  - Parametros:
    - upperCaseCharsArray: Array de caracteres en mayuscula.
    - stringLength: Longitud del array.
  - Retorno:
    - char *: Puntero al nuevo array de caracteres en minuscula. El puntero debe liberarse con free() cuando ya no se necesite.

## USO
Para utilizar la librería textUtils, asegúrate de incluir el archivo 
de encabezado "textUtils.h" en tu source. 
Además, asegúrate de agregar la libreria estatica a tu ruta.

```C
  #include "toolsUtils.h"

  int main() {
    // Ejemplo de uso de las funciones
    char text[] = "Hello World";
    size_t length = sizeof(text) - 1;

    // strtoupper() - Convertir a mayúsculas directamente
    strtoupper(text, length);
    printf("Resultado de strtoupper(): %s\n", text);

    // mkupperstring() - Crear una nueva cadena en mayúsculas
    char *upperText = mkupperstring(text, length);
    printf("Resultado de mkupperstring(): %s\n", upperText);
    free(upperText); // Liberar la memoria asignada por mkupperstring()

    // strtolower() - Convertir a minúsculas directamente
    strtolower(text, length);
    printf("Resultado de strtolower(): %s\n", text);

    // mklowerstring() - Crear una nueva cadena en minúsculas
    char *lowerText = mklowerstring(text, length);
    printf("Resultado de mklowerstring(): %s\n", lowerText);
    free(lowerText); // Liberar la memoria asignada por mklowerstring()

    return 0;
}
```

## NOTAS ADICIONALES

- Recuerda liberar la memoria con free();
