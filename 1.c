#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

signed main()
{
  printf("pid = %d, ppid = %d\n", getpid(), getppid());
  return 0;
}
