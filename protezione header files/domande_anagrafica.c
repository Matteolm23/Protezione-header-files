#include<stdio.h>
#include"domande_anagrafica.h"

Boolean Danagrafica (void)
{
    Boolean risultato = TRUE;
    char risposta[3];

    printf("\nrispondi SI (s) o NO (n) alle domande\n\n");

    printf("Sei nato?\n");
    scanf(" %c", &risposta[0]);

    printf("Hai più di 18 anni?\n");
    scanf(" %c", &risposta[1]);

    printf("Ti senti giovane?\n");
    scanf(" %c", &risposta[2]);

    for(int i = 0; i < 3; i++)
    {
        if(risposta[i] != 's')
        {
            return FALSE;
        }
    }
    return TRUE;
}