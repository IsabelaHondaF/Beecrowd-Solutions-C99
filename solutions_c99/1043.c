#include <stdio.h>
 
int main() {
    double A, B, C;
    scanf ("%lf %lf %lf", &A, &B, &C);
    double P = A+B+C;
    double area = ((A+B)*C/2);
    if (((A+B)>C) && ((A+C)>B) && ((B+C>A))) {
        printf ("Perimetro = %.1lf\n", P);
    }   else {
        printf ("Area = %.1lf\n", area);
    }
 
    return 0;
}