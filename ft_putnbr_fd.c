#include <stdio.h>
#include <limits.h>
#include"libft.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putnbr_fd(214748364, fd);
			ft_putchar_fd('8', fd);
		}
		n = -n;
	}
	if (n <= 9 && n >= 0)
		ft_putchar_fd(n + 48, fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

/*int main()
{
	printf("Maximum value of int: %d\n", INT_MAX);
	printf("Maximum value of int: %d\n", INT_MIN);

	int a = 2147483647;
	int b = -2147483648;
	ft_putnbr_fd(a, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(b, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(-42, 0);
	return 0;
}*/
