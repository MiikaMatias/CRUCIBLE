#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    /*
    O_CREAT: create file if not exist
    O_WRONLY: write only
    O_TRUNC: if exists, truncate to 0 
    S_IRUSR: read user
    S_IWUSR: write user
    */
    char *file_name = argv[1];
    int fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    return 0;
}