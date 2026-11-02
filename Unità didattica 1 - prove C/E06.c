/*
Acquisire 4 valore da input, stampare a video 
e calcolare la somma solo dei valori compresi tra 10 e 20.
*/
#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int somma;
    char junk; //pulizia buffer di input//  

    printf("inserisci a");
    scanf("%d", &a);
    junk = getchar();

    printf("inserisci b");
    scanf("%d", &b);
    junk = getchar();

    printf("inserisci c");
    scanf("%d", &c);
    junk = getchar();

    printf("inserisci d");
    scanf("%d", &d);
    junk = getchar();
    
    somma = 0;
    if((a>=10) && (a<=20)){
        printf("Valore a: %d\n", a);
        somma = somma + a;
    }
    if((b>=10) && (b<=20)){
        printf("Valore b: %d\n", b);
        somma = somma + b;
    }
    if((c>=10) && (c<=20)){
        printf("Valore c: %d\n", c);
        somma = somma + c;
    }
    if((d>=10) && (d<=20)){
        printf("Valore d: %d\n", d);
        somma = somma + d;
    }
    
    printf("\nSomma dei valori idonei: %d\n", somma);

    return 0;
}