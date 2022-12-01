#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>
// ad
static void child(){
    printf("I'm child! my pid is %d \n",getpid());
    exit(EXIT_SUCCESS);
}

static void parent(pid_t pid_c){
    printf("I'm parent! my pid is %d and the pid of my child is %d. \n",getpid(),pid_c);
    exit(EXIT_SUCCESS);
}

int main(void){
    pid_t ret;
    printf("i am main_before_fork()  my pid is %d\n",getpid());
    ret=fork();
    printf("i am main_after_fork()   my pid is %d     ret is %d\n",getpid(),ret);
    if(ret==-1)
        err(EXIT_FAILURE,"fork() failed");
    if(ret==0){
        child();
    }else{
        parent(ret);
    }
    err(EXIT_FAILURE,"shouldn't reach here");
}