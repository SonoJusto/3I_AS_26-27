/*
- 1. Realizzare un programma C che richiede in input un 
valore intero, visualizza tutti i valori da 1 al valore inserito.*/


#include <stdio.h>
int main() {
    int cnt;
    int n;

    printf("Inserisci il valore: ");
    scanf("%d", &n);

    cnt = 1;
    while (cnt <= n) {
        printf("%d\n", cnt);
        cnt=cnt+1; //oppure cnt++
    }
    return 0;
}