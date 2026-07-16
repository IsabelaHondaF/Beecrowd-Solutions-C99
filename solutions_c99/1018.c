#include <stdio.h>
 
int main() {
    int v;
    scanf ("%d", &v);
    int v100 = (v/100);
    int v50 = ((v - v100*100)/50);
    int v20 = (v - (v100*100+v50*50))/20;
    int v10 = (v- (v100*100+v50*50+v20*20))/10;
    int v5 = (v - (v100*100+v50*50+v20*20+v10*10))/5;
    int v2 = (v - (v100*100+v50*50+v20*20+v10*10+v5*5))/2;
    int v1 = (v - (v100*100+v50*50+v20*20+v10*10+v5*5+v2*2))/1;
    printf ("%d\n", v);
    printf ("%d nota(s) de R$ 100,00\n", v100);
    printf ("%d nota(s) de R$ 50,00\n", v50);
    printf ("%d nota(s) de R$ 20,00\n", v20);
    printf ("%d nota(s) de R$ 10,00\n", v10);
    printf ("%d nota(s) de R$ 5,00\n", v5);
    printf ("%d nota(s) de R$ 2,00\n", v2);
    printf ("%d nota(s) de R$ 1,00\n", v1);

    return 0;
}