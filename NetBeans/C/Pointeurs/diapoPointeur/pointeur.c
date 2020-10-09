#include <stdio.h>
#include <stdlib.h>

void echange(short int *ptrV1, short int *ptrV2) {
    short int val;
    val = *ptrV2;
    *ptrV2 = *ptrV1;
    *ptrV1 = val;

}
