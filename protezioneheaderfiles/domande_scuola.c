#include<stdio.h>
#include"domande_scuola.h"

Boolean Dscuola (void)
{
    Bool risultato = TRUE;
    char risposta[Nscuola];

    printf("rispondi SI (s) o NO (n) alle domande\n\n");

    printf("Ti piace la scuola?\n");
    scanf("%c", risposta[0]);

    printf("Sei mai stato bocciato?\n");
    scanf("%c", risposta[1]);

    printf("rispondi si!?!");
    scanf("%c", risposta[2]);

    for(int i = 0; i < Nscuola; i++)
    {
        if(risposta[i] != 's')
        {
            return FALSE;
        }
    }
    return TRUE;
}