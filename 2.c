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
     printf("We are child, pid = %d\n", getpid());
  } else {
     printf("We are parent, ppid = %d\n", getppid());
  }

  return 0;
}
