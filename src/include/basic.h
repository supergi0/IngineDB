// defines the most basic imports for every file in the project.

#ifndef BASIC_H
#define BASIC_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool checkMemoryAvailable(void* pointer){
    if(pointer == NULL){
        fprintf(stderr,"Error: Memory not allocated");
        return false;
    }

    return true;
}

#endif 