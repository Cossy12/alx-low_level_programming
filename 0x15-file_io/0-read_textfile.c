#include "main.h"

/**
 * read_textfile 
 * @filename: the file to read.
 * @letters: chars to read
 * Description: read 
 * Return: this return the number of chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rdfile, _rd, _wd;
	char *bf;

	if (filename == NULL)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
		return (0);

	rdfile = open(filename, O_RDONLY, 600);
	if (rdfile == -1)
	{
		free(bf);
		return (0);
	}
	_rd = read(rdfile, bf, letters);
	if (_rd == -1)
	{
		free(bf);
		return (0);
	}

	_wd = write(STDOUT_FILENO, bf, _rd);
	if (_wd == -1 || _wd != _rd)
	{
		return (0);
	}

	free(bf);
	close(rdfile);
	return (_wd);
}
