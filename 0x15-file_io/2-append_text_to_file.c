#include "holberton.h"
/**
 * append_text_to_file - apend text at the end of a file
 * @filename: file name
 * @text_content: text to append
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	 int name, sizer, writer;

	if (filename == NULL)
		return (-1);

	name = open(filename, O_WRONLY | O_APPEND);
	if (name == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	sizer = 0;
	while (text_content[sizer])
	{
		sizer++;
	}
	writer = write(name, text_content, sizer);
	if (writer == -1)
		return (-1);

	close(name);
	return (1);
}
