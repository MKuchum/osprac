#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

signed main(int argc, char *argv[], char *envp[])
{
    printf("comand line have %d arguments:\n", argc);
    for (size_t i = 0; i < argc; ++i)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    printf("\nNext we will see enviroment property:\n");
    for (size_t i = 0; envp[i] != NULL; ++i)
    {
        printf("envp[%d] = %s\n", i, envp[i]);
    }
    return 0;
}
