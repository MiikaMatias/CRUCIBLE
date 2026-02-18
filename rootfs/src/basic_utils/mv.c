#include <stdio.h>

int main(int argc, char **argv) {
    /*
    O_CREAT: create file if not exist
    O_WRONLY: write only
    O_TRUNC: if exists, truncate to 0 
    S_IRUSR: read user
    S_IWUSR: write user
    */
    char *original_file_name = argv[1];
    char *new_file_name = argv[2];

    rename(original_file_name, new_file_name);

    return 0;
}