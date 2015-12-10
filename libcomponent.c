// Klas Löfstedt, 1991-03-14-1496, Linux som utvecklingsmiljö, ht15
// libcomponent.c
#include <stdio.h>

int E12(int temp_resistance, int *c)
{
    int count = 1; 
    int resistance;
    if(temp_resistance >= 82){
        resistance = 82;
    }
    else if(temp_resistance >= 68){
        resistance = 68;
    }
    else if(temp_resistance >= 56){
        resistance = 56;
    }
    else if(temp_resistance >= 47){
        resistance = 47;
    }
    else if(temp_resistance >= 39){
        resistance = 39;
    }
    else if(temp_resistance >= 33){
        resistance = 33;
    }
    else if(temp_resistance >= 27){
        resistance = 27;
    }
    else if(temp_resistance >= 22){
        resistance = 22;
    }
    else if(temp_resistance >= 18){
        resistance = 18;
    }
    else if(temp_resistance >= 15){
        resistance = 15;
    }
    else if(temp_resistance >= 12){
        resistance = 12;
    }
    else if(temp_resistance >= 10){
        resistance = 10;
    }
    else{
        count = 0;
        resistance = 0;
    }
    *c += count;
    return resistance;
}

int multiple_calc(int *in_resistance)
{
    int multiple = 1; 
    while(*in_resistance >= 100){
        *in_resistance = *in_resistance / 10; 
        multiple = 10*multiple;
    }
    return multiple;
}
int e_resistance(float orig_resistance, float *res_array)
{
    int count = 0;
    int left_resistance = 0;
    int i;
    for(i = 0; i < 3; i++){
        int temp_resistance = (int)orig_resistance - left_resistance;
        //printf("temp_resistance: %d\n", temp_resistance);
        int multiple = multiple_calc(&temp_resistance);
        //printf("multiple: %d\n", multiple);
        int new_resistance = E12(temp_resistance, &count);
        //printf("new_resistance: %d\n", new_resistance);
        //printf("count: %d\n", count);
        left_resistance += new_resistance * multiple;
        res_array[i] = new_resistance * multiple;
        //printf("res_array: %f\n", res_array[i]);
    }
    //printf("count_tot: %d\n", count);
    return count;
}
