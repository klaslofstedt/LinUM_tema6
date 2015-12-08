// lab 6
#include <stdio.h>
#include "libcomponent.h"

int main(void)
{
    float res_array[3];
    int count = e_resistance(50, &res_array); 
    printf("count: %d\n", count);
    int i;
    for(i = 0; i < 3; i++){
        printf("res: %d\n", res_array[i]);
    }
	return 0;
}
