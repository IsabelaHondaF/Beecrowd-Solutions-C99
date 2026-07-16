#include <stdio.h>

int main () {
    int X;
    double Y;
    scanf ("%d %lf", &X, &Y);
    double cons = (X / Y);
    printf ("%.3lf km/l\n", cons);

    return 0;
}