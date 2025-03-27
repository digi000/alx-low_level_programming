#include <stdib.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i;
	if (filename == NULL)
		return (-1);
	if !(access(filename, W_OK) == 0)
		return (-1);
	for (i = 0; filename[i] != '\0'; i++)
	{}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wr = write(fd, filename, sizeof(char) * i);
	if (wr == -1)
		return (-1);
	return (1);
	close(fd);
}
