#include <stdio.h>

int main(){
    float c;
    printf ("the temperature in celsius is: \n");
    scanf ("%f", &c);
    printf ("the temperature in fahrenheit is:%f\n", 1.8*c+32);
    //in float calculation if we take no in fraction form then make sure that they are also written in float form, not in int
    // as if we took (9/5)*c +32 then it gives wrong answer for that we have to take (9.0/5.0)*c + 32
    return 0;

}
