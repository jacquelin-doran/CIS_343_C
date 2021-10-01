#include "lite_vector.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

lite_vector* lv_new_vec(size_t type_size){
}

void lv_cleanup(lite_vector* vec){
}

size_t lv_get_length(lite_vector* vec){
}

bool lv_clear(lite_vector* vec){
}

void* lv_get(lite_vector* vec, size_t index){
}

static bool lv_resize(lite_vector* vec){
}

bool lv_append(lite_vector* vec, void* element){
}
