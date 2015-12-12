// lab 6
// NOT FINISHED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "libresistance.h"
#include "libcomponent.h"
#include "libpower.h"

int main(void)
{
    int count = 3; 
    float resistance = 1398;
    float volt = 5;
    float current = 1.5;
    char coupling;
    int numcomponents, i;
    float* components;

    // Libresistance test part
    printf("test phase 1 ------------------------\n");
    printf("Coupling [S | P]: ");
    scanf("%c", &coupling);
    coupling = tolower(coupling);
    printf("Amount of components: ");
    scanf(" %d", &numcomponents);
    components = malloc(numcomponents * sizeof(float));
    for(i = 0; i < numcomponents; ++i) {
    	printf("Component %d in ohm: ", (i + 1));
    	scanf(" %f", &components[i]);
    }
    printf("Resistance: %g ohm\n", calc_resistance(numcomponents, coupling, components));
    free(components);

    // libpower test part
    printf("test phase 2 ------------------------\n");
    printf("Volt = %fV\n", volt);
    printf("Current = %fA\n", current);
    printf("Resistance = %fohm\n", resistance);
    printf("Calculated power(P=U*U/R): %f\n", calc_power_r(volt, resistance));
    printf("Calculated power(P=U*I): %f\n", calc_power_i(volt, current));

    // libcomponent test part 
    printf("test phase 3 ------------------------\n");
    float res_array[3]; 
    count = e_resistance(resistance, &res_array[0]); 
    printf("Resistor 1 = %fohm\n", res_array[0]);
    printf("Resistor 2 = %fohm\n", res_array[1]);
    printf("Resistor 3 = %fohm\n", res_array[2]);
    printf("Count = %d\n", count);
    return 0;
}
