#include <stdio.h>
 
int main() {
    int h1, m1, h2, m2, horas, minutos, soma1, soma2;

    scanf ("%d %d %d %d", &h1, &m1, &h2, &m2);

    if (m1>m2) {
        m2 += 60;
        h2 -= 1;
    }
    if (h1>=h2) {
        h2 += 24;
    }

    horas = h2 - h1;
    minutos = m2 - m1;
    if (horas == 24) {
        if ((h1 == h2)&&(m1 == m2)) {
        }   else if ((h1!=0)&&(h2!=0)&&(m1!=0)&&(m2!=0)){
            horas = 0;
        }
    }
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
 
    return 0;
}
