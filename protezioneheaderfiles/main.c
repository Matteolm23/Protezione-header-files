#include<stdio.h>
#include"domande_anagrafica.h"
#include"domande_scuola.h"

int main(void){
        Boolean risultato_anagrafica = domande_anagrafica();
        Boolean risultato_scuola = domande_scuola();
        if(risultato_anagrafica * risultato_scuola)
                printf("Sei giovane\n");
        else
                printf("Sei giovane dentro\n");
        return 0;
}