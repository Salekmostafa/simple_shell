#include "head.h"

/**
 * f_2d_array - Frees a two-dimensional array.
 * @arr: The array to be freed.
 */

void f_2d_array(char ***arr) {
    int i;
    i = 0;

    if (arr == NULL || *arr == NULL) {
        return;
    }

    while ((*arr)[i] != NULL) {
        free((*arr)[i]);
        (*arr)[i++] = NULL;
    }

    free(*arr);
    *arr = NULL;
}
