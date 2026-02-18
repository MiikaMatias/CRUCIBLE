#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>

typedef struct{
    size_t cols;
    size_t rows;
    char* col_names[];
} minfo;

typedef struct
{
    minfo *matrix_info;
    double *data;
} matrix;

/* Read a .jsonl file line by line and return as matrix
 * @param file_path path to file
 * @return matrix
 */
matrix *read_jsonl(char *file_path);

/* Create a n_rows x n_cols sized matrix
 * @param n_rows number of rows
 * @param n_cols number of cols
 * @return matrix
 */
matrix *create_zero_matrix(size_t n_rows, size_t n_cols);

/* Transpose the matrix
 * @param original_matrix (e.g. 4X5)
 * @return transposed_matrix (e.g. 5X4)
 */
matrix *transpose(matrix *original_matrix);

/* Print matrix
 *@param matrix
*/
void print_matrix(matrix *m);

#endif