#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x = 9;
    int z = -3;
    float y = 3.14;

    x = sqrt(x);
    x = pow(x, 3);
    //y  = round(y);
    //y = ceil(y);
    //y = floor(y);
    z = abs(z);
    x = log(x);

    //TRIGONOMETRY' RELATED FUNCTIONS
    /*
    x = sin(x);
    x = cos(x);
    x = tan(x);
    */

    printf("x = %d\ny = %f\nz = %d\n", x, y, z);
}