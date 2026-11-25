/*- 3. Realizzare un programma C che richiede un valore 
in input, visaulizza tutti i valori PARI compresi tra il valore inserito e 100.*/

#include <stdio.h>
int main() {
    int v1;
    int cnt;
    char junk;

    printf("Inserisci un valore: ");
    scanf("%d", &v1);
    junk = getchar();

    if(v1 < 100){
        cnt = v1;
        while(cnt <= 100){
            if(cnt%2 == 0){
                printf("%d", cnt);
            }
            cnt = cnt + 1;
        }
    }
    else{
        printf("Serie non disponibile!\n");
    }
    return 0;
}
