#include <stdio.h>
#include "matrix.h"

int main() {
    matrix *m = create_zero_matrix(5, 4);
    m->data[2] = 1.0;
    matrix *t = transpose(m);
    printf("Original %zuX%zu:\n", m->matrix_info->rows, m->matrix_info->cols);
    print_matrix(m);
    printf("Transpose %zuX%zu:\n", t->matrix_info->rows, t->matrix_info->cols);
    print_matrix(t);

    matrix *iris = read_csv("/env/data/iris-data.csv");
    print_matrix(iris);

    exit(0);
}