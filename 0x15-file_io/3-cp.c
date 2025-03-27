#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int ac, char *av[])
{
	char *ff;
	char *ft;
	int fd, wr, fd1, cd;
	char *buff;
	char bc;
	struct stat st;

	(void)bc;
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = av[1];
	ft = av[2];
	fd = open(ff, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit (98);
	}
	/*
	while(read(fd, &bc, 1) == 1)
	{
		len++;
	}
	*/
	buff = malloc(1024);
	read(fd, buff, 1024);
	

	if (stat(ft, &st) == 0)
		fd1 = open(ft, O_TRUNC | O_WRONLY);
	else
		fd1 = open(ft, O_CREAT | O_WRONLY, 0664);
	wr = write(fd1, buff, 1024);
	if (wr == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cd = close(fd);
	if (cd == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	cd = close(fd1);
        if (cd == -1)
        {
                dprintf(2, "Error: Can't close fd %d\n", fd1);
                exit(100);
        }
	return(0);
}
