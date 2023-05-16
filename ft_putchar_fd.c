#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('1', 0);
// 	return 0;
// }
//0：standard input.  1:standard output. 2: standard error
