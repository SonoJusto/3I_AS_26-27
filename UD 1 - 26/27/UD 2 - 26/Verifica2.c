/*Obiettivo: Gestire logiche di controllo complesse con if-else fortemente innestate, calcoli con
decimali su soglie multiple e validazione degli input.
Consegna:
Scrivi un programma in C per calcolare il costo di una bolletta della luce in base al consumo
energetico in kWh (float) e alla tipologia di utente (intero: 1 per Residente, 2 per Non
Residente).
Il programma deve prima verificare che la tipologia sia valida (1 o 2) e che il consumo non sia
negativo. Successivamente, applica le tariffe a scaglioni:
• Se l'utente è Residente (1):
• Primi 150 kWh consumati: tariffa di 0.20 €/kWh.
• Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.30 €/kWh.
• Per i kWh oltre i 300: tariffa di 0.40 €/kWh.
• Se l'utente è Non Residente (2):
• Primi 150 kWh consumati: tariffa di 0.35 €/kWh.
• Per i kWh eccedenti i 150 fino a 300 kWh: tariffa di 0.45 €/kWh.
• Per i kWh oltre i 300: tariffa di 0.55 €/kWh.

Infine, aggiungi una quota fissa di gestione pari a 15.50 € per i residenti e 25.00 € per i non
residenti, stampando il dettaglio dei calcoli.:*/

#include <stdio.h>
int main() {
    int residenza = 0;
    float cunsumo_kwh = 0;
    float costo = 0;

    printf("Inserisci lo stato di residenza")
}