#include <stdio.h>
int main() {
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int maggiore = 0;
    float media = 0.0;
    int somma_v1_v2 = 0;
    int somma_v3_v4 = 0;

    printf("Inserisci il primo valore: ");
    scanf("%d", &v1);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &v2);
    printf("Inserisci il terzo valore: ");
    scanf("%d", &v3);
    printf("Inserisci il quarto valore: ");
    scanf("%d", &v4);

    maggiore = v1;
    if(v2 > maggiore) {
        maggiore = v2;
    }
    if(v3 > maggiore) {
        maggiore = v3;
    }
    if(v4 > maggiore) {
        maggiore = v4;
    }

    media = (v1 + v2 + v3 + v4)/4.0;

    somma_v1_v2 = v1 + v2;

    somma_v3_v4 = v3 + v4;

    printf("Valore maggiore tra i 4 inseriti: %d \n", maggiore);

    printf("Valore della media dei 4 numderi: %f \n", media);

    if(somma_v1_v2 > somma_v3_v4) {
        printf("v1 + v2 e maggiore di v3 + v4 \n");
    }
    if(somma_v3_v4 > somma_v1_v2) {
        printf("v3 + v4 e maggiore di v1 + v2 \n");
    }
    if(somma_v3_v4 == somma_v1_v2) {
        printf("v1 + v2 e uguale di v3 + v4 \n");
    }

    return 0;
}