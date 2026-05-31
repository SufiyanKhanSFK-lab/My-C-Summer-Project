#include <stdio.h>

int main(){
    float c;
    printf ("the temperature in celsius is: \n");
    scanf ("%f", &c);
    printf ("the temperature in fahrenheit is:%f\n", 1.8*c+32);
    return 0;

}