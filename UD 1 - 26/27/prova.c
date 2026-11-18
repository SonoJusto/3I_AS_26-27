/*
    Dato un numero positivo N, determinare se è perfetto (un numero è perfetto se è uguale alla somma di tutti i suoi divisori meno sé stesso.
    Esempio: 6 è perfetto poiché essendo 3, 2 ,1 i suoi divisori sono 3+2+1=6. 8 non è perfetto poiché 1+2+4<>8).*/
#include <stdio.h>;
int main() {
    int N, sum = 0;
    printf("Inserisci un numero positivo: ");
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }

    if (sum == N) {
        printf("%d è un numero perfetto.\n", N);
    } else {
        printf("%d non è un numero perfetto.\n", N);
    }
    return 0;
}