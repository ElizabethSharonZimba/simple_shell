#include "main.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

/**
 * execute - Creates a new child process,
 * executes a command and waits for the child process
 * to update the status
 * @arguments: Array of inputs by the user
 * Return: 0 if success
 */
int execute(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;

	pid = fork();

	if (pid == -1)
	{
		perror("fork");
		return (1);
	}
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);
		if (exe_stat == -1)
		{
			perror("hsh");
			exe_stat = 126;
		}
		exit(exe_stat);
	}
	else
	{
		waitpid(pid, &stat, 0);
	}
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}
