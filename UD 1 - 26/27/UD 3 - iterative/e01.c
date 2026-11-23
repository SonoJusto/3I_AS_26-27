/*  Author: Justin SCardovelli
    Date: 23/11/2026
    Abstract: Esempio di utilizzo dell'iterativa  WHILE (struttura ripetititva del codice)*/

#include <stdio.h> 
int main (){
    int cnt; //variabile contatore per l'iterativa.

    //voglio scrivere a video 5 volte "Hello WOrld" andando a capo ogni volta.
    cnt = 1;
    while(cnt <= 5){
        printf("Hello World -> %d proseguo...\n", cnt);
        cnt = cnt + 1;  
    }
    printf ("Esco con cnt = %d\n", cnt);

    printf("\n\n");
    //posso fare un ciclo con il contatore che viene decrementato?
    cnt = 5;
    while(cnt >= 1){
        printf("Hello People -> %d proseguo...\n", cnt);
        cnt = cnt - 1;
    }
    printf("\nEsco con cnt-%d\n", cnt);
    return 0;
}