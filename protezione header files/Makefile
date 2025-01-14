all: main

clean: main main.o domande_anagrafica.o domande_scuola.o
	rm -rf main main.o domande_anagrafica.o domande_scuola.o

main: main.o domande_anagrafica.o domande_scuola.o
	gcc -o main main.o domande_anagrafica.o domande_scuola.o

main.o: domande_anagrafica.h domande_scuola.h main.c
	gcc -c -o main.o main.c

domande_anagrafica.o: domande_anagrafica.h domande_anagrafica.c bool.h
	gcc -c -o domande_anagrafica.o domande_anagrafica.c

domande_scuola.o: domande_scuola.h domande_scuola.c bool.h
	gcc -c -o domande_scuola.o domande_scuola.c