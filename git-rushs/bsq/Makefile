NAME = bsq

SOURCES = *.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

#CUR_DIR = $(shell pwd) # Permite ejecutar funciones de Shell. Esta línea se puede eliminar sin problemas

all: $(OBJECTS) $(NAME) clean

$(OBJECTS): *.c
	cc $(CFLAGS) -o $(OBJECTS) $(SOURCES)

$(NAME): $(OBJECTS)
	cc -o $(NAME) $(OBJECTS)

clean:
	#rm -f # Insertar aquí los nombres de los archivos temporales. Comentado para evitar disgustos

fclean: clean
        #rm -f # Poner aquí el nombre del binario creado al ejecutar make all. Comentado para evitar disgustos

re: fclean all

## PENDIENTE: reordenar las reglas, poner todos los archivos en SOURCES, averiguar los archivos de salida para eliminarlos, puede que poner alguna otra regla (asegurarse de que ninguna sea inutil), tener cuidado con los relinks.
