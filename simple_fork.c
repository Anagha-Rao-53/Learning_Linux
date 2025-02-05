#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
	pid_t pid;
	pid = fork();

	if (pid < 0) {
		perror("Fork Failed \n");
		exit(EXIT_FAILURE);
	}

	else if (pid == 0) {
		// sleep(5); - Child will become orphan process because patent exited before child
		printf("Executing child process \n");
		printf("child -PID : %d\n", getpid());
		execlp("/bin/ps", "ps", "-u", (char *)NULL);
	}

	else {
		/*
		// sleep(5); - Child will become zombie process because it has exited but still its entry is present in the process table
		printf("Executing parent process \n");
		printf("parent -PID : %d\n", getpid());
		*/
		printf("Parent-PID : %d \n", getpid())
		wait(NULL);
	}

	return 0;
}	



