#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "couleur.h"

int main(){
    // permet a l'utilisateur de choisir un limite 
    // et le programme donne tout les nombre premier jusqu'a la limite
    clrscr();
    couleur("32");
    printf("NOMBRE PREMIER\n");
    couleur("0");
    int limite;
    printf("entrez un limite : \n");
    scanf("%d", &limite);
    int i = 2;
    int j = 2;
    int k = 0;
    printf("voici tout les nombre premier jusqu'a %d\n", limite);
    while (i <= limite)
    {
        while (j <= i)
        {
            if (i % j == 0) k++;
            j++;
        }
        if (k == 1)  
        {
            if(i != 2) printf(", ");
            printf("%d", i);
        }
        i++;
        j = 2;
        k = 0;
    }
    printf("\n");
}