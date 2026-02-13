#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t cols;
    size_t rows;
    double* data;
} matrix;

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

void print_matrix(matrix* m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%lf ", m->data[i*m->cols + j]);
        }
        printf("\n");
    }
}

int main() {
    matrix *m = create_zero_matrix(5, 4);
    print_matrix(m);
    exit(0);
}