#include <stdio.h>

int main () {
    int n, i, j, valor;
    int fibo[40];
    int cham[40];

    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    cham[0] = 0;
    cham[1] = 0;
    cham[2] = 2;

    for (i=3; i<39; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        cham[i] = cham[i-1] + cham[i-2] + 2;
    }

    scanf ("%d", &n);

    for (i=0; i<n; i++) {
        scanf ("%d", &valor);
        printf ("fib(%d) = %d calls = %d\n", valor, cham[valor], fibo[valor]);
    }

    return 0;
}