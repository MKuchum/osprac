#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

signed main()
{
  pid_t pid, ppid;

  pid = fork();
  if (pid == -1) {
    exit(1);
  } else if (pid == 0) {
     printf("We are child, ppid = %d\n", getppid());
  } else {
     printf("We are parent, pid = %d\n", getpid());
  }

  return 0;
}
