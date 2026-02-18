#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t cols;
    size_t rows;
    double* data;
} matrix;

matrix* read_csv(char* file_path) {
    matrix *m = (matrix *)malloc(sizeof(matrix));

    FILE *fptr = fopen(file_path, "r");
    char buff[100];
    fgets(buff, sizeof(buff), fptr);
    printf("%s", buff);

    return m;
}

matrix* create_zero_matrix(size_t n_rows, size_t n_cols) {
    matrix *m = (matrix *)malloc(sizeof(matrix));
    m->rows = n_rows;
    m->cols = n_cols;
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
    transposed_matrix->cols = original_matrix->rows;
    transposed_matrix->rows = original_matrix->cols;
    transposed_matrix->data = (double *)malloc(transposed_matrix->cols * transposed_matrix->rows * sizeof(double));

    for (int r = 0; r < original_matrix->rows; r++) {
        for (int c = 0; c < original_matrix->cols; c++) {
            transposed_matrix->data[r * original_matrix->cols + c] = original_matrix->data[c * original_matrix->rows + r];
        }
    }

    return transposed_matrix;
}

void print_matrix(matrix* m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%lf ", m->data[i*m->cols + j]);
        }
        printf("\n");
    }
}
