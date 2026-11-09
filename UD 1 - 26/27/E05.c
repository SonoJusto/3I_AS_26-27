/* creare un programma che mi permette di scambiare il valore di 2 variabili*/
#include <stdio.h>
int main(){
    int v1 = 0;
    int v2 = 0;
    int tmp = 0;
    printf("inserisci il primo valore e");
    scanf("%d", &v1);

    printf("inserisci il secondo valore e");
    scanf("%d", &v2);

    tmp = v1;
    v1 = v2;
    v2 = tmp;

    printf("Valori: v1 = %d, v2 = %d\n", v1, v2);
}