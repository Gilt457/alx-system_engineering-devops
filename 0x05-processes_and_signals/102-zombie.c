#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - creates an infinite loop to make the program hang
 * Return: always 0
 */
int infinite_while(void)
{
	/* Use do-while instead of while */
	do {
		sleep(1);
	} while (1);
	return (0);
}

/**
 * main - creates 5 zombie processes
 * Return: always 0
 */
int main(void)
{
	int i;
	pid_t zombie;

	/* Use a while loop instead of a for loop */
	i = 0;
	while (i < 5)
	{
		zombie = fork();
		if (zombie == 0) /* Use == instead of ! */
			exit(0); /* Use exit instead of return */
		printf("Zombie process created, PID: %d\n", zombie);
		i++;
	}

	infinite_while();
	return (0);
}
