#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.c"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("file.txt",O_RDONLY);
	line = get_next_line(fd);
	printf("%s",line);
	line = get_next_line(fd);
	printf("%s",line);
	return (0);
}
