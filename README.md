# LIBRERIA textUtils

## BREVE

La librería textUtils proporciona funciones para manipular cadenas de caracteres en C (de momento).

## FUNCIONES

# unsigned int rndnum(void)

- Genera un número entero aleatorio utilizando el generador de números 
pseudoaleatorios rand(). Esta función utiliza la función time(NULL) 
para obtener el tiempo actual y la función getpid() para obtener el ID 
del proceso. Combina el tiempo y el ID del proceso mediante una 
operación XOR para obtener una semilla única. A continuación, 
establece la semilla con srand() y genera un número aleatorio con 
rand(). El número aleatorio se devuelve como resultado.

# unsigned int maxrndnum(unsigned int maxValue)

- Genera un número entero aleatorio en el rango de 0 a maxValue. 
Utiliza la función rndnum() para obtener un número aleatorio y luego 
utiliza el operador módulo % para limitar el rango al valor máximo 
especificado. El número aleatorio resultante se devuelve como 
resultado.

# unsigned int mmrndnum(unsigned int minValue, unsigned int maxValue)

- Genera un número entero aleatorio en el rango de minValue a 
maxValue. Utiliza la función maxrndnum() para generar un número 
aleatorio en el rango de 0 a maxValue. A continuación, aplica una 
técnica de rechazo para igualar la distribución y garantizar que el 
número generado esté dentro del rango especificado. Si el número 
generado está por debajo del valor mínimo o por encima del valor 
máximo permitido, se generará un nuevo número aleatorio hasta que se 
cumpla la condición. El número aleatorio resultante se devuelve como 
resultado.

# swapint(int *a, int *b) int,char,float

- Esta función intercambia los valores de dos variables. Toma 
dos punteros al tipo de variable como argumentos y realiza el 
intercambio de los referenciados por dichos punteros. 

# indexofint(int arr[], size_t arraySize, int target) int,char,float

- Esta función busca un elemento específico en un array y 
devuelve su índice si se encuentra. Si el elemento no está presente en 
el array, se devuelve el valor -1.

  - Parametros:
    - arr: Array de tipo de variable en el que se realizará la búsqueda.
    - arraySize: Tamaño del array.
    - target: Elemento entero que se busca en el array.

## USO
Para utilizar la librería toolsUtils, asegúrate de incluir el archivo 
de encabezado "textUtils.h" en tu source que la vaya a utilizar. 
Además, asegúrate de agregar la libreria estatica a tu ruta.

```C
  #include "toolsUtils.h"
  #include <stdio.h>

  int main() {
    // codigo ejemplo aqui
    return 0;
}

```

## NOTAS ADICIONALES

- La función rndnum() utiliza la función srand() para establecer la 
semilla del generador de números pseudoaleatorios. Asegúrate de llamar 
a srand() antes de utilizar cualquier otra función de generación de 
números aleatorios si deseas utilizar una semilla personalizada.
