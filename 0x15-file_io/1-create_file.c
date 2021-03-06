#include "main.h"

/**
 * create_file - Creates a file and inserts text into it
 * @filename: the name of the file passed as argument
 * @text_content: text to write into the file
 *
 * Return: @1 if success and @-1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int w, file, cnt = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		close(file);
		return (-1);
	}
	if (text_content == NULL)
		w = write(file, "", 0);
	else
	{
		while (text_content[cnt])
			cnt++;
		w = write(file, text_content, cnt);
	}
	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}

