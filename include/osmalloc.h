#pragma once 

#include <stdint.h> 
#include <stddef.h> 

enum {
    HEAP_SIZE = 1024 * 1024, 
}; 

void *osmalloc(size_t ); 
void osfree(void *); 

struct Array {
    size_t len; 
    void *ar[]; 
}; 

Array *record(void ); 