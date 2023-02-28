#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    printf("CONVERTISSEUR ASCII\n");
    bool q = 0;
    while (q != 1)
    {
        char c[4];
        
        printf("entrez un caractère : (pour quitter entrez 'stop')\n");
        scanf("%s", c);
        if (strcmp(c,"stop") == 0) q = 1;
        printf("Le code ASCII de %s est %d\n", &c[0], c[0]);
    }
    printf("Au revoir\n");
    return 0;
}