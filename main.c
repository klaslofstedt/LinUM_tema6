// lab 6
// NOT FINISHED
#include <stdio.h>
#include "libcomponent.h"

int main(void)
{
    int count = 3; 
    int resistance = 1398;
    // Libresistance test part
    
    // libpower test part
    
    // libcomponent test part (works like shit by now)
    
    float res_array[3]; // temporary array until we have a dynamic
    count = e_resistance(resistance, &res_array[0]); 
    int i;
    for(i = 0; i < 3; i++){
        printf("resistance value: %f\n", res_array[i]);
    }
    printf("count: %d\n", count);
	return 0;
}
