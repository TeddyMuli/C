#include <stdio.h>
#include <stdlib.h>
main()
{
    printf("Celcius to degree conversion table\n");
    float fahr, celcius;
    float lower, upper, step;
    #define LOWER 0//lower limit of temperature scale
    #define UPPER 300 //upper limit of temperature
    #define STEP 20 //step size
    fahr=LOWER;
    while (fahr<=UPPER) {
        celcius=(5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t %6.4f\n", fahr, celcius);
        fahr = fahr+STEP;
    }
    return 0;
}
