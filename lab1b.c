#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int value = atoi(argv[1]);

	pid_t pid = fork();

	if(pid < 0)
	{
		fprintf(stderr, "Fork Failed\n");
		return 1;
	}

	else if(pid == 0)
	{
		execlp("/home/ndh1226/labs/lab1/collatz", "collatz", argv[1], NULL);
		fprintf(stderr, "Error\n");
	}

	else
	{
		wait(NULL);
	}

	return 0;
}
