//Includes
#include "libresistance.h"

/*
    libresistance.c
    By: Erik Ullberg - 2015-11-12+13
*/

float calc_resistance(int count, char conn, float* array) {
    int i = 0;
    float ret = -1.0;

    if(array) {
        ret = 0.0;
        if(conn == 'p') {
            for(i = 0; i < count; ++i) {
                if(array[i] != 0.0) {
                    ret += (1 / array[i]);
                }
                else { return 0.0; }
            }
            ret = (1 / ret);
        }
        else if(conn == 's') {
            for(i = 0; i < count; ++i) {
                ret += array[i];
            }
        }
    }
    
    return ret;
}

