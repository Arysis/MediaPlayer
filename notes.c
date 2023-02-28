#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char *liste[50];
    
    int size = 0;
    int inter = 0;

    while(inter != 1) {
        char buffer[250];
        printf("Rentrer une note :");
        scanf("%s", buffer);
        if (strcmp(buffer, "stop") == 0)
        {
            inter = 1;
        } else {
            liste[size] = buffer;
            size++; 
        }

        printf("\nListe des taches :\n");
        
        for (int i = 0; i < size; i++)
        {
            printf("%s\n", liste[i]);
        }
        
        
    }

    
    return 0;
} 