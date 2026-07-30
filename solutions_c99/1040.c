#include <stdio.h>
 
int main() {
    double N1, N2, N3, N4, N5;
    scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    double m = (N1*2 + N2*3 + N3*4 + N4)/10;

    if (m >= 7) {
        printf ("Media: %.1lf\n", m);
        printf ("Aluno aprovado.\n");
    }   else if (m < 5) {
        printf ("Media: %.1lf\n", m);
        printf ("Aluno reprovado.\n");
    }   else {
        scanf ("%lf", &N5);
        printf ("Media: %.1lf\n", m);
        double m2 = (m + N5)/2;
        printf ("Aluno em exame.\n");
        printf ("Nota do exame: %.1lf\n", N5);
            if (m2 >= 5) {
                printf ("Aluno aprovado.\n");
            } else {
                printf ("Aluno reprovado.\n");

        }
        printf ("Media final: %.1lf\n", m2);
    }

    return 0;
}