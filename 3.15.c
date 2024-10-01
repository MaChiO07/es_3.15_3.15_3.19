#include<stdio.h>

int main(void) {

    char category;
    float price;

    printf("--Tariffa Ferrovia-- \n");
    printf("inserire la categoria di Utente (S - stutente, P - pensionato, D - dissocupato): "); 
    scanf("%c", &category);
    printf("inserire prezzo del biglietto (in euro): ");
    scanf("%f", &price);

    if (category == 'S') {
        printf("Lei ha ricevuto sconto per gli studenti: 15%% \n");
        price = price*0.85;
    }

    else if (category == 'P') {
        printf("Lei ha ricevuto lo sconto per pensionati: 10%% \n");
        price = price*0.90;
    }

    else if (category == 'D') {
        printf("Lei ha ricevuto lo sconto per dissocupati: 25%% \n");
        price = price*0.75;
    }

    else {
        printf("categoria inserita` non e` correta!");
    }

    printf("--RICEVUTA-- \n");
    printf("il prezzo del biglietto finale: %g euro", price);


    return 0;
}