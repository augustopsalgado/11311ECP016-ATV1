Compilador = arm-none-eabi-gcc
Parametros = -c -mcpu=cortex-m4 -mthumb

main.o: main.c
	$(Compilador) $(Parametros) -o $@ $^

startup.o : startup.c
	$(Compilador) $(Parametros) -o $@ $^

limpar:
	rm -f *.o