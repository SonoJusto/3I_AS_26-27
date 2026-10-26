/*
Creare un programma che richiede in input due lati di una figura;
se i lati sono uguali calcolare il preimetro della figura;
se i lati sono diversi calcolare l'area della figura.
Ovviamente calcolare il valore (ipotizzare quadrato o rettangolo)
*/
 #include <stdio.h>
 int main()
 {
     float lato1 = 0;
     float lato2 = 0;
     float perimetro = 0;
     float area = 0;
     printf("Inserisci il primo lato:");
     scanf("%f", &lato1);
     printf("Inserisci il secondo lato:");
     scanf("%f", &lato2);
     if(lato1 == lato2) 
     {
         perimetro = 4 * lato1; // Calcolo del perimetro del quadrato
         printf("I lati sono uguali. Il perimetro della figura è: %f", perimetro);
     } else {
         area = lato1 * lato2; // Calcolo dell'area del rettangolo
         printf("I lati sono diversi. L'area della figura è: %f", area);
     }
 }
 
 /* Sintassi per confronti:
 op1 == op2 => uguaglianza
 op1 != op2 => non uguale
 op1 > op2 => maggiore
 op1 < op2 => minore
 op1 >= op2 maggiore o uguale
 
 Invertire uguale e un altro segno è errato "<=" corretto; "=<" non corretto.*/