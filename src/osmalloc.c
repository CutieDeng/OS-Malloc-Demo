#include <assert.h> 

#include "osmalloc.h"

inline void *_os_malloc(size_t v, void *const core_pointer) {
    assert (core_pointer); 
}

void *osmalloc(size_t v) {
    static void *core_pointer; 
    if (!core_pointer) {
        core_pointer = malloc(HEAP_SIZE); 
        if (!core_pointer) {
            fprintf(stderr, "Malloc %d bytes fails. ", HEAP_SIZE); 
            abort(); 
        }
    }

    // actually malloc your codes. 
    return _os_malloc(v, core_pointer); 
}