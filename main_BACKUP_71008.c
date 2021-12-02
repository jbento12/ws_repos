#include <stdio.h>
#include <stdlib.h>


int main(int count, char *args[]){

    char nome1[20],nome2[20];

    printf("Imprima o seu nome\n");
    scanf("%s", nome1);

<<<<<<< HEAD
    printf("Imprima o nome do colega do lado esquerdo\n");
=======
    printf("Imprima o nome do colega de cima\n");
>>>>>>> 0b8f4c0b7501e98d98842fcc2505473603c1f54e
    scanf("%s", nome2);

    printf ("%s is in love with %s\n", nome1, nome2);

    return 0;
}