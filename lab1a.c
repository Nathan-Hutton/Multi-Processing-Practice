#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(int argc, char *argv[])
{
	int value;
	value = atoi(argv[1]);

	pid_t pid = fork();

	if (pid < 0) {
		fprintf(stderr, "Fork failed\n");
	}

	else if (pid == 0) {
		while (value != 1) {
			if (value % 2 != 0) {
				value = (value * 3) + 1;
				printf("%d\n", value);
			}
			else {
				value /= 2;
				printf("%d\n", value);
			}
		}
	}

	else {
		wait(NULL);

		printf("Done\n");
	}

	return 0;
}
