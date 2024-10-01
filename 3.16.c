#include<stdio.h>

int main(void) {

    int num1, num2, num3;

    printf("--Numero Maggiore-- \n");

    printf("Inserire primo numero: ");
    scanf("%d", &num1);
    printf("Inserire secondo numero: ");
    scanf("%d", &num2);
    printf("Inserire terzo numero: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("primo numero %d e` maggiore di tutti", num1);
        }
    }

    if (num2 > num1) {
        if (num2 > num3) {
            printf("secondo numero %d e` maggiore di tutti", num2);
        }
    }
    
    if (num3 > num1) {
        if (num3 > num2) {
            printf("terzo numero %d e` maggiore di tutti", num3);
        }
    }

    

    return 0;
}