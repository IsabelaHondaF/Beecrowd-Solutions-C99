#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if ((a>b) && (a>c)) {
        printf ("%d\n", ((c>b) ? b : c ));
        printf ("%d\n", ((c>b) ? c : b ));
        printf ("%d\n", a);
    }   else if ((b>a) && (b>c)) {
        printf ("%d\n", ((c>a) ? a : c ));
        printf ("%d\n", ((c>a) ? c : a ));
        printf ("%d\n", b);
    }   else if ((c>a) && (c>b)) {
        printf ("%d\n", ((b>a) ? a : b ));
        printf ("%d\n", ((b>a) ? b : a ));
        printf ("%d\n", c);
    }
    printf ("\n");
    printf ("%d\n", a);
    printf ("%d\n", b);
    printf ("%d\n", c);

    return 0;
}