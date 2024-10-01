#include<stdio.h>

int main(void) {
    
    printf("-Triangolo-- \n");

    int side1, side2, side3;

    printf("Inserire primo lato: ");
    scanf("%d", &side1);
    printf("Inserire secondo lato: ");
    scanf("%d", &side2);
    printf("Inserire terzo lato: ");
    scanf("%d", &side3);

    if (side1 == side2) {
        if(side1 == side3) {
            printf("triangolo e` equilatero \n");
        }
        else {
            printf("triangolo e` isocele \n");
        }
    }

    else if (side1 == side3) {
        printf("triangolo e` isocele \n");
    }

    else if (side2 == side3) {
        printf("triangolo e` isocele \n");
    }

    else {
        printf("triangolo e` scaleno \n");
    }

    return 0;
}