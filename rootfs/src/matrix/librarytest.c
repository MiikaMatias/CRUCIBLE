#include <stdio.h>
#include "matrix.h"

int main() {
    matrix *m = create_zero_matrix(5, 4);
    m->data[2] = 1.0;
    matrix *t = transpose(m);
    printf("Original %zuX%zu:\n", m->rows, m->cols);
    print_matrix(m);
    printf("Transpose %zuX%zu:\n", t->rows, t->cols);
    print_matrix(t);
    exit(0);
}