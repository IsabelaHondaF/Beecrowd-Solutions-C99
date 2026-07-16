# include <stdio.h>

int main () {
    int code1, number1;
    double price1;
    int code2, number2;
    double price2;
    scanf ("%d %d %lf", &code1, &number1, &price1);
    scanf ("%d %d %lf", &code2, &number2, &price2);
    double total = ((number1*price1)+(number2*price2));
    printf ("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}