#include "main.h"

/**
 * append_text_to_file - appends  to  existing file
 * @filename: the file to append text
 * @text_content: text to be appended
 *
 * Return: 1 0n sucess, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int rdfile, wordfl;
	int words = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	else
	{
		while (text_content[words] != '\0')
		{
			words++;
		}
	}

	rdfile = open(filename, O_WRONLY | O_APPEND);

	if (rdfile == -1)
	{
		return (-1);
	}

	wordfl = write(rdfile, text_content, words);

	if (wordfl == -1)
	{
		return (-1);
	}

	close(rdfile);

	return (1);
}


