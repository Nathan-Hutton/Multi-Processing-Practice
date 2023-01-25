#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
	int value = atoi(argv[1]);

	while(value != 1)
	{
		if (value % 2 != 0)
		{
			value = (value * 3) + 1;
			printf("%d ", value);
		}
		else
		{
			value /= 2;
			printf("%d ", value);
		}
	}
	printf("\n");
}
