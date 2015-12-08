// lab 6
// NOT FINISHED
#include <stdio.h>
#include "libcomponent.h"

int main(void)
{
    // Libresistance test part
    
    // libpower test part
    
    // libcomponent test part (works like shit by now)
    float res_array[3];
    int count = e_resistance(50, &res_array); 
    printf("count: %d\n", count);
    int i;
    for(i = 0; i < 3; i++){
        printf("res: %d\n", res_array[i]);
    }
	return 0;
}
