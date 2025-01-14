#include<stdio.h>
#include"domande_anagrafica.h"

Boolean Danagrafica (void)
{
    Bool risultato = TRUE;
    char risposta[Nanagrafica];

    printf("rispondi SI (s) o NO (n) alle domande\n\n");

    printf("Sei nato?\n");
    scanf("%c", risposta[0]);

    printf("Hai più di 18 anni?\n");
    scanf("%c", risposta[1]);

    printf("Ti senti giovane?");
    scanf("%c", risposta[2]);

    for(int i = 0; i < Nanagrafica; i++)
    {
        if(risposta[i] != 's')
        {
            return FALSE;
        }
    }
    return TRUE;
}