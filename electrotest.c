// lab 6
// NOT FINISHED
#include <stdio.h>
#include "libcomponent.h"
#include "libpower.h"

int main(void)
{
    int count = 3; 
    float resistance = 1398;
    float volt = 5;
    float current = 1.5;

    // Libresistance test part
    printf("test phase 1 ------------------------\n");
    
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
    int i;
    for(i = 0; i < 3; i++){
        printf("resistance value: %f\n", res_array[i]);
    }
    printf("count: %d\n", count);
	return 0;
}
