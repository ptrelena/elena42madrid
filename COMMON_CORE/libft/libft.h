Para crear una librería estática en C que esté enlazada con muchos archivos .c, debemos seguir estos pasos:

Crear múltiples archivos fuente (.c).
Crear los archivos de encabezado (.h) correspondientes.
Compilar cada archivo fuente en un archivo objeto (.o).
Crear la librería estática a partir de los archivos objeto.
Crear un Makefile que automatice este proceso.
Ejemplo de un proyecto con una librería estática
Vamos a suponer que tienes varios archivos fuente que implementan funciones que deseas incluir en la librería.

Estructura del proyecto
Supongamos que tenemos la siguiente estructura de directorios y archivos:

css
Copiar código
/mi_libreria
│
├── src/
│   ├── main.c
│   ├── util.c
│   ├── math.c
│
├── include/
│   ├── util.h
│   ├── math.h
│
├── lib/
│   └── libmylib.a  (librería estática que vamos a crear)
│
└── Makefile
1. Archivos fuente
src/main.c
c
Copiar código
#include <stdio.h>
#include "util.h"
#include "math.h"

int main() {
    int a = 5, b = 3;

    // Usamos funciones de la librería
    printf("Suma: %d\n", add(a, b));
    printf("Resta: %d\n", subtract(a, b));

    return 0;
}
src/util.c
c
Copiar código
#include "util.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
src/math.c
c
Copiar código
#include "math.h"

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    return 0;  // Evitar división por cero
}
2. Archivos de encabezado
include/util.h
c
Copiar código
#ifndef UTIL_H
#define UTIL_H

int add(int a, int b);
int subtract(int a, int b);

#endif // UTIL_H
include/math.h
c
Copiar código
#ifndef MATH_H
#define MATH_H

int multiply(int a, int b);
int divide(int a, int b);

#endif // MATH_H
3. Makefile
El Makefile se encargará de compilar cada archivo fuente en un archivo objeto y luego crear la librería estática libmylib.a. También tendrá reglas para compilar el programa principal que usará esta librería.

makefile
Copiar código
# Variables
CC = gcc
CFLAGS = -Wall -Iinclude
SRCS = src/main.c src/util.c src/math.c
OBJS = $(SRCS:.c=.o)
LIBRARY = lib/libmylib.a
EXEC = main

# Regla por defecto (compila el ejecutable)
all: $(EXEC)

# Crear la librería estática
$(LIBRARY): src/util.o src/math.o
	ar rcs $(LIBRARY) src/util.o src/math.o

# Compilar el ejecutable
$(EXEC): $(OBJS) $(LIBRARY)
	$(CC) $(OBJS) -Llib -lmylib -o $(EXEC)

# Regla para compilar los archivos fuente en archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar los archivos generados
clean:
	rm -f src/*.o $(OBJS) $(EXEC)

# Limpiar todo (incluso la librería estática)
fclean: clean
	rm -f $(LIBRARY)

# Volver a compilar todo desde cero
re: fclean all

.PHONY: all clean fclean re
Explicación del Makefile:
Variables:

CC = gcc: Usamos el compilador gcc.
CFLAGS = -Wall -Iinclude: Los flags de compilación. -Wall activa todas las advertencias y -Iinclude agrega el directorio include para buscar los archivos de encabezado.
SRCS: Los archivos fuente .c.
OBJS: Los archivos objeto generados a partir de los archivos fuente.
LIBRARY: El archivo de la librería estática (lib/libmylib.a).
EXEC: El nombre del ejecutable que se generará.
Reglas:

all: Regla por defecto. Compila el ejecutable main enlazado con la librería estática libmylib.a.
$(LIBRARY): Crea la librería estática libmylib.a usando los archivos objeto util.o y math.o. La herramienta ar se utiliza para crear la librería estática.
$(EXEC): Crea el ejecutable main enlazado con la librería estática libmylib.a usando gcc. El flag -Llib indica el directorio donde se encuentra la librería, y -lmylib le dice al compilador que enlace la librería libmylib.a.
%.o: %.c: Regla para compilar cada archivo .c en su correspondiente archivo .o.
clean: Elimina los archivos objeto y el ejecutable.
fclean: Elimina también la librería estática generada.
re: Elimina todo lo generado y recompila el proyecto desde cero.
.PHONY: Define que las reglas all, clean, fclean y re no están asociadas a archivos reales, lo que es útil para evitar conflictos de nombres.

4. Compilación y uso
Compilar el proyecto:

Simplemente ejecuta el comando make para compilar todo el proyecto (incluyendo la librería estática y el ejecutable):

bash
Copiar código
make
Limpiar los archivos generados:

Para eliminar los archivos objeto y el ejecutable, puedes usar el comando:

bash
Copiar código
make clean
Eliminar todo (incluyendo la librería estática):

Para limpiar también la librería estática, usa:

bash
Copiar código
make fclean
Recompilar todo desde cero:

Si quieres eliminar todo y volver a compilar todo el proyecto, puedes usar:

bash
Copiar código
make re
Resultado final
Después de ejecutar make, tendrás:

La librería estática libmylib.a en el directorio lib/.
El ejecutable main que está enlazado con la librería libmylib.a.
Un programa que utiliza las funciones add, subtract, multiply y divide desde la librería.
Conclusión
Este ejemplo demuestra cómo crear una librería estática en C, enlazar múltiples archivos .c y automatizar el proceso con un Makefile. Puedes expandir este proyecto agregando más archivos fuente y funciones, y ajustando el Makefile para incluir esas nuevas dependencias.
