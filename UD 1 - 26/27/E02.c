/*
    Author: Justin Scardovelli
    Data: 20.10.2026
    Filename : E02.c
    Abstract: Semplice programma che somma sue valori richiesti in input.
*/
#include <stdio.h>

int main()
{
    // dichiarazione delle variabili necessarie al nostro algoritmo (variables declaration).
    int a;
    int b;
    int c;
    // junk è usata per pulire il buffer nelle fasi di input.
    char junk;

    // inizializzazzione delle variabili
    a = 0;
    b = 0;
    c = 0;

    // fase di input dei valori A e B (input values).
    printf("inserisci il valore a: ");
    scanf("%d", &a);
    junk = getchar();

    printf("inserisci il valore b: ");
    scanf("%d", &b);
    junk = getchar();

    // calcolo in C la somma dei valori A e B (operations).
    c = a + b;

    // comunico il valore della somma (output results).
    printf("La somma vale: %d", c);

    return 0;
}