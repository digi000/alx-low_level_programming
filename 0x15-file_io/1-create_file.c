#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	for (i = 0; text_content[i] != '\0'; i++)
	{}
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, sizeof(char) * i);
	if (wr == -1)
		return (-1);
	return(1);
	close(fd);
}
