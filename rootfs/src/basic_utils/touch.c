#include <sys/stat.h>
#include <fcntl.h>

int main() {
    /*
    O_CREAT: create file if not exist
    O_WRONLY: write only
    O_TRUNC: if exists, truncate to 0 
    S_IRUSR: read user
    S_IWUSR: write user
    */
    int fd = open("foo", O_CREAT |O_WRONLY|O_TRUNC,S_IRUSR|S_IWUSR);
    return 0;
}