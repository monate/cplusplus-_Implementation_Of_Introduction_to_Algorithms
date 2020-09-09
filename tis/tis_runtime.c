#include<stdio.h>
#include <sys/time.h>

int gettimeofday(struct timeval *tv, struct timezone *tz)
{
    printf("[TIS] gettimeofday returns 42.42\n");
    if (tv) {
        tv->tv_sec = 42;
        tv->tv_usec = 42;
    }
    if (tz) {
        tz->tz_minuteswest = 42;
        tz->tz_dsttime = 4;
    }
    return 0;
}
#include <unistd.h>

int isatty(int fd) {
    printf("[TIS] isatty returns 0 for %d\n", fd);
    return 0;
}
