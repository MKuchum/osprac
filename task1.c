#include <stdio.h>
#include <unistd.h>

signed main() {
    printf("UserID = %d, GroupID = %d\n", getuid(), getgid());
    return 0;
}
