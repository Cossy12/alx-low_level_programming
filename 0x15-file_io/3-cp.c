#include "main.h"

/**
 * main - copy  file.
 * @argc:  number of args
 * @argv:  Args.
 * Description: copy  file
  * Return: 0 .
 */
int main(int argc, char *argv[])
{
	int source, psts;
	int rd, exited_, quited_;
	char buffer[1024];

	if (argc > 3 || argc < 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(*(argv + 1), O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	psts = open(*(argv + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rd = read(source, buffer, 1024)) > 0)
	{
		if (psts == -1 || (write(psts, buffer, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(argv + 2));
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	exited_ = close(source);
	if (exited_ < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source), exit(100);
	quited_ = close(psts);
	if (quited_ < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", psts), exit(100);
	return (0);
}



