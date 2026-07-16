# include <stdio.h>

int main () {
    char name[30];
    double salary;
    double sold;
    scanf ("%s %lf %lf", name, &salary, &sold);
    double total = (salary + (0.15*sold));
    printf ("TOTAL = R$ %.2lf\n", total);
    return 0;
}