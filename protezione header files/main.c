#include<stdio.h>
#include"domande_anagrafica.h"
#include"domande_scuola.h"

int main(void)
{
        Boolean risultato_anagrafica = Danagrafica();
        Boolean risultato_scuola = Dscuola();

        if(risultato_anagrafica * risultato_scuola)
         printf("\nSei giovane\n\n");
        else
         printf("\nSei giovane dentro\n\n");
        return 0;
}