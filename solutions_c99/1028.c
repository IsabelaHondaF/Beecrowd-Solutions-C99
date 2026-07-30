#include <stdio.h>

int mdc (int n1, int n2) {
    int r=1;
    while (r!=0) {
        r = n1 % n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}

int main() {
    int n, n1, n2, i, j, q;
    
    scanf ("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf ("%d %d", &n1, &n2);
        printf ("%d\n", mdc(n1, n2));
    }

    return 0;
}