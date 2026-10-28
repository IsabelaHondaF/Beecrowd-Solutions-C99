#include <stdio.h>

 
int main() {
    char notocorda[11];
    char filo[9];
    char alim[11];
    char animal[12];
    scanf ("%s", notocorda);
    scanf ("%s", filo);
    scanf ("%s", alim);

    if (notocorda[0] == 'v') {
        if (filo[0] == 'm') {
            if (alim[0] == 'o') {
                printf ("homem\n");
            }   else {
                printf ("vaca\n");
            }   
        }   else {
            if (alim[0] == 'c') {
                printf("aguia\n"); 
            }   else {
                printf ("pomba\n");
            }
        }
    }   else {
        if (filo[0] == 'i') {
            if (alim[2] == 'm') {
                printf ("pulga\n");
            }   else {
                printf ("lagarta\n");
            }
        }   else {
            if (alim[0] == 'h') {
                printf ("sanguessuga\n");
            }   else {
                printf ("minhoca\n");
            }
        }   
    }
 
    return 0;
}