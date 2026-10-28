#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char string[50];
    int tamanho;
}   Struct_de_strings;


void bubblesort (int n) {
    int i, j, terminou = 0;
    char straux[50];
    Struct_de_strings struct_de_strings[50];

    for (i=0; ((i<n) && (terminou=0)); i++) {
        terminou = 1;
        for (j=0; j<n-i-1; j++) {
            if (struct_de_strings[i].tamanho > struct_de_strings[i+1].tamanho) {
                terminou = 0;
                strcpy(straux, struct_de_strings[i].string);
                strcpy(struct_de_strings[i].string, struct_de_strings[i+1].string);
                strcpy(struct_de_strings[i+1].string, straux);
            }
        }
    }
}

int main () {
    int n, i, j, contador=0;
    char space_or_enter;
    Struct_de_strings struct_de_strings[50];

    scanf ("%d\n", &n);

    for (i=0; i<n; i++) {
        for (j=0; j<50; j++) {
            scanf ("%s", struct_de_strings[j].string);
            scanf ("%c", &space_or_enter);
            struct_de_strings[j].tamanho = strlen(struct_de_strings[j].string);
            contador++;
            if (space_or_enter == '/n') {
                space_or_enter = '/0';
                break;
            }
        }

        bubblesort(contador);

        for (j=0; j<contador-1; j++) {
            printf ("%s ", struct_de_strings[j].string);
        }
        printf ("%s/n", struct_de_strings[contador].string);
    }
    
    return 0;
}