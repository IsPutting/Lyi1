#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>

static void child()
{
	printf("I'm child! my pid is %d.\n", getpid());
	exit(EXIT_SUCCESS);
}

static void parent(pid_t pid_c)
{
	printf("I'm parent! my pid is %d and the pid of my child is %d.\n",
	       getpid(), pid_c);
	exit(EXIT_SUCCESS);
}

int main(void)
{
	pid_t ret;
	ret = fork();
	if (ret == -1)
		err(EXIT_FAILURE, "fork() failed");
	if (ret == 0) {
		// fork() 会返回 0 给子进程，因此这里调用 child()
		child();
	} else {
		// fork() 会返回新创建的子进程的进程 ID（大于 1）给父进程，因此这里调用 parent()
		parent(ret);
	}
	// 在正常运行时，不可能运行到这里
	err(EXIT_FAILURE, "shouldn't reach here");
}
