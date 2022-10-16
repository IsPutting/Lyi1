#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <err.h>

#define NLOOP_FOR_RESTIMATION 1000000000UL
#define NSECS_PER_MSEC 10000000UL
#define NSECS_PER_SEC 1000000000UL

static inline long diff_nsec(){
    
}