#include "main.h"

/**
 * create_file - a function  create file
 *
 * @filename: name of file 
 * @text_content: string to write 
 *
 * Return: return 1else -1
*/
int create_file(const char *filename, char *text_content)
{
	int fl, stat, len = 0;

	if (filename == NULL) 
		return (-1);

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1) 
		return (-1);

	if (text_content) 
	{
		while (text_content[len] != '\0') 
			len++;


		stat = write(fl, text_content, len);
		if (stat == -1) 
			return (-1);
	}

	close(fl);
	return (1);
}
