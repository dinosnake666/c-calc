#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
}

/*#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Value as a string : %s\tValue as an integer by atoi : %d\n", argv[1], atoi(argv[1]));
		ft_putnbr(atoi(argv[1]));
	}
	else
		printf("\aError : amount of arguments not matching.\n");
	return (0);
}*/
