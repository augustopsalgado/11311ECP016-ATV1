Compilador = arm-none-eabi-gcc
Parametros = -c -mcpu=cortex-m4 -mthumb

all: main.o startup.o

main.o: main.c
	$(Compilador) $(Parametros) -o $@ $^

startup.o : startup.c
	$(Compilador) $(Parametros) -o $@ $^

limpar:
	rm -f *.o