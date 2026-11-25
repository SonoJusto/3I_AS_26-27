/*- 2. Realizzare un programma C che richiede in input due
 valori (v1 e v2), se v2 è maggiore di v1 allora visualizza
tutti i valori compresi tra v1 e v2, altrimenti visualizza 
il messaggio "Serie non disponibile".*/

#include <stdio.h>
int main() {
    int v1=0;
    int v2=0;
    int cnt;
    char junk;

    printf("Inserisci il primo valore");
    scanf("%d\n", &v1);
    junk = getchar();
    printf("Inserisci il secondo valore");
    scanf("%d", &v2);
    junk = getchar();

    if(v2 > v1){
        cnt = v1;
        while(cnt <= v2);
            printf("%d", cnt);
            cnt = cnt + 1;
    }
    else{
        printf("Serie non disponibile!\n");
    }
    return 0;
}