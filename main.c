#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("ff.txt",O_RDONLY);
	line = get_next_line(fd);
	printf("%s",line);
	return (0);
}
