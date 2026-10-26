#include <stdio.h>

int main()
{
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float avg = 0;
    printf("Inserisci il primo valore:");
    scanf("%f", &v1);
    printf("Inserisci il secondo valore:");
    scanf("%f", &v2);
    printf("Inserisci il terzo valore:");
    scanf("%f", &v3);
    avg = (v1+v2+v3) / 3;
    printf("La media è: %f", avg);
    if(avg>=6) {
        printf("\nPromosso");
    } else {
        printf("\nBocciato");
    }
}