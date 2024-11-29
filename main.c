#include <stdio.h>
#include <sys/time.h>

long long current_timestamp_in_milliseconds() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return (long long)(tv.tv_sec) * 1000 + (tv.tv_usec) / 1000;
}

int main(int argc, char const *argv[])
{
    long start = current_timestamp_in_milliseconds();
    long end = current_timestamp_in_milliseconds();
    printf("%ld\n", end - start);
    /* code */
    return 0;
}
