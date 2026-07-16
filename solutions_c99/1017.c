#include <stdio.h>
 
int main() {
    double time;
    double speed;
    scanf ("%lf %lf", &time, &speed);
    double liters = (time * speed) / 12;
    printf ("%.3lf\n", liters);

    return 0;
}