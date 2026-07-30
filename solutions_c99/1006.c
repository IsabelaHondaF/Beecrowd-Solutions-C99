#include <stdio.h>

int main () {
    double A;
    double B;
    double C;
    scanf ("%lf", &A);
    scanf ("%lf",  &B);
    scanf ("%lf", &C);
    double M = (A*2 + B*3 + C*5)/10;
    printf ("MEDIA = %.1f\n", M);
    return 0;
}