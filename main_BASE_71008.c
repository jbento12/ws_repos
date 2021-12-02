#include <stdio.h>
#include <stdlib.h>


int main(int count, char *args[]){

    char nome1[20],nome2[20];

    printf("Imprima o seu nome\n");
    scanf("%s", nome1);

    printf("Imprima o nome do colega do lado direito\n");
    scanf("%s", nome2);

    printf ("%s is in love with %s\n", nome1, nome2);

    return 0;
}