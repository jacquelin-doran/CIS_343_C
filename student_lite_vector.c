#include "lite_vector.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

lite_vector* lv_new_vec(size_t type_size){
	lite_vector *vector = malloc(type_size);
	vector -> max_capacity = 8;
	vector -> type_size;
	vector -> data = malloc(sizeof(void *) * 8);
	return vector;

}
 void lv_cleanup(lite_vector* vec){
	free(vec);
}


size_t lv_get_length(lite_vector* vec){
	return vec -> length;
}

bool lv_clear(lite_vector* vec){
	free(vec);
	return true;
}

void* lv_get(lite_vector* vec, size_t index){
	return vec -> data[index];
}

static bool lv_resize(lite_vector* vec){
	vec -> max_capacity;

	free(vec);
	return 1;
}

bool lv_append(lite_vector* vec, void* element){
	return true;
}

