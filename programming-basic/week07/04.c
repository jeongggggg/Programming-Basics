#include <stdio.h>
#include <errno.h>
int main() {
errno = EFBIG;
perror("error message:"); return 0;
}