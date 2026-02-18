#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include <string.h>


matrix* read_csv(char* file_path) {
    matrix *m = (matrix *)malloc(sizeof(matrix));
    minfo *matrix_info = (minfo *)malloc(sizeof(minfo));
    m->matrix_info = matrix_info;

    FILE *fp = fopen(file_path, "r");
    
    return m;
}

matrix* create_zero_matrix(size_t n_rows, size_t n_cols) {
    matrix *m = (matrix *)malloc(sizeof(matrix));
    minfo *matrix_info = (minfo *)malloc(sizeof(minfo));

    m->matrix_info = matrix_info;
    m->matrix_info->rows = n_rows;
    m->matrix_info->cols = n_cols;
    m->data = (double *)malloc(n_rows * n_cols * sizeof(double));

    for (int i = 0; i < n_rows * n_cols; i++) {
        m->data[i] = 0.0;
    }

    return m;
}

// https://gudok.xyz/transpose/
// when needed, optimize with the good old fashioned
// block -> vectorize workflow
matrix* transpose(matrix* original_matrix) {
    matrix *transposed_matrix = (matrix *) malloc(sizeof(matrix));
    minfo *matrix_info = (minfo *)malloc(sizeof(minfo));

    transposed_matrix->matrix_info = matrix_info;
    transposed_matrix->matrix_info->cols = original_matrix->matrix_info->rows;
    transposed_matrix->matrix_info->rows = original_matrix->matrix_info->cols;
    transposed_matrix->data = (double *)malloc(transposed_matrix->matrix_info->cols * transposed_matrix->matrix_info->rows * sizeof(double));

    for (int r = 0; r < original_matrix->matrix_info->rows; r++) {
        for (int c = 0; c < original_matrix->matrix_info->cols; c++) {
            transposed_matrix->data[r * original_matrix->matrix_info->cols + c] = original_matrix->data[c * original_matrix->matrix_info->rows + r];
        }
    }

    return transposed_matrix;
}

void print_matrix(matrix* m) {
    for (int i = 0; i < m->matrix_info->rows; i++) {
        for (int j = 0; j < m->matrix_info->cols; j++) {
            printf("%lf ", m->data[i*m->matrix_info->cols + j]);
        }
        printf("\n");
    }
}
