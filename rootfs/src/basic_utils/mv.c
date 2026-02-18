#include <stdio.h>

int main(int argc, char **argv) {
    char *original_file_name = argv[1];
    char *new_file_name = argv[2];

    rename(original_file_name, new_file_name);

    return 0;
}