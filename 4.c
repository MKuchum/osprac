#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

signed main()
{
    pid_t pid = fork();
    if (pid == -1)
    {
        exit(1);
    }
    else if (pid == 0)
    {
        printf("We are child, ppid = %d\n\n", getppid());
        printf("Now we will start \"3.c\"\n\n");
        execl("3.c", "arg1", "arg2", "argKEK", "lastArg", NULL);
    }
    else
    {
        printf("We are parent, pid = %d\n", getpid());
    }
    return 0;
}

