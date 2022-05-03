#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * 
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, file, result;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf || !filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	result = read(file, buf, letters);
	if (result == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	buf[result] = '\0';/*Null char at the end*/
	w = write(STDOUT_FILENO, buf, result);/*printf not allowed*/
	if (w == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	close(file);
	free(buf);
	return (result);
}
