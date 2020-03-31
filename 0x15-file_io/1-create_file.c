#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int name, writer, sizer;

	if(filename == NULL)
		return (-1);
	
	name = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (name == -1)
		return (-1);

	/*if (text_content == NULL)
	{
		close(name);
		return(1);
	}
	*/
	sizer = 0;
	while(text_content[sizer])
	{
		sizer++;
	}

	writer = write(name, text_content, sizer);
	if (writer == -1)
		return(-1);

	close(name);
	return(1);
}
