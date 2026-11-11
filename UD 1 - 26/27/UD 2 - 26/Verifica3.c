/*
Scrivi un programma in C che simuli la cassa di un negozio. Il programma deve:
1. Chiedere all'utente di inserire il prezzo unitario di un articolo (valore float) e la quantità
acquistata (valore intero).
2. Calcolare il prezzo totale lordo (prezzo_unitario * quantita).
3. Applicare una politica di sconto basata sulla quantità:
• Se la quantità acquistata è maggiore di 10, viene applicato uno sconto del 15% sul
totale.
• Altrimenti, non viene applicato alcuno sconto.
4. Stampare a schermo il totale lordo, l'eventuale sconto applicato e il prezzo finale netto
(formattato con due cifre decimali).
*/
#include <stdio.h>
int main(){
    float prezzo_unitario = 0;
    float quantita = 0;
    float prezzototlord = 0;
    float prezzototnet = 0;
    float prezzoscont = 0;
    char junk;
    
    printf("inserire il prezzo:");
    scanf("%f", &prezzo_unitario);
    junk=getchar();

    printf("inserire la quantita:");
    scanf("%f", &quantita);
    junk=getchar();

    prezzototlord=prezzo_unitario/100*15;

    if(quantita>10) 
    {
        prezzototlord=prezzototnet/100*15;
        printf("il prezzo scontato e:%.2f\n", prezzoscont);
        junk=getchar();
        printf("lo sconto è del 15 \n");

    }
    printf("il prezzo totale lordo:%.2f\n", prezzototlord);
    return 0;
}