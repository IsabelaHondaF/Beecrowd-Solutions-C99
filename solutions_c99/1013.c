# include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    int maior1 = (a + b + abs(a - b))/2;
    int maior2 = (maior1 + c + abs(maior1 - c))/2;
    printf ("%d eh o maior\n", maior2);

    return 0;
}