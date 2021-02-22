#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     fd[2], result = 0;

    size_t size1 = 1, size2 = 1;
    char  resstring[1000000], putstring[1000000];

    if (pipe(fd) < 0) {
        printf("Can\'t open pipe\n");
        exit(-1);
    }
    // онйю опнцпюллю ме союдер :)
    while (1) {
        size1 = write(fd[1], "1", 1);
        if (size1 != 1) {
            break;
        }
        ++result;
        printf("pipe size = %d\n", result);
    }
    if (close(fd[0]) < 0) {
        printf("Can\'t close reading side of pipe\n");
        exit(-1);
    }
    if (close(fd[1]) < 0) {
        printf("Can\'t close writing side of pipe\n");
        exit(-1);
    }
    printf("pipe size = %d\n", result);
    return 0;
}
