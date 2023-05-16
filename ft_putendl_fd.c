#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	ft_putendl_fd("file descriptor?", 0);

	return 0;
}

//ssize_t write(int __fd, const void *__buf, size_t __nbyte)
*/
