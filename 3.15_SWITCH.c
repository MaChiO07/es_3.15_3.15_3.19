#include <stdio.h>

int main() {

    // dichiarazioni delle variabile
    char category;
    float price;
    float price_discounted;

    // aquisto dei dati
    printf("--Tariffa Ferroviale-- \n");
    printf("Inserire la sua categoria (S - studente, P - pensionato, D - dissocupato): ");
    scanf("%c", &category);
    printf("Inserire il prezzo del biglietto (in euro): ");
    scanf("%f", &price);


    // conditions
    switch (category) {
        case 'S':
            printf(" lei ha ricevuto lo sconto di 15%% per gli studenti \n");
            price_discounted = price*0.85;
            break;
        case 'P':
            printf(" lei ha ricevuto lo sconto di 10%% per pensionati \n");
            price_discounted = price*0.90;
            break;
        case 'D':
            printf(" lei ha ricevuto lo sconto di 25%% per dissocupati \n");
            price_discounted = price*0.75;
            break;
    }


    // stampo la ricevuta
    printf("--RICEVUTA-- \n");
    printf("prezzo del biglietto senza sconto %g euro \n", price);
    printf("prezzo del biglietto con lo sconto %g euro \n", price_discounted);
    printf("Grazie per il conquisto!");

    // termina la programma
    return 0;
}
