#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);

void	ft_add_sub(int num1, char op, int num2)
{
	if (op == '+')
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 + num2);
	}
	else if (op == '-')
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 - num2);
	}
}

/*int	main(void)
{
	ft_add_sub(10, '+', 5);
	ft_add_sub(23, '-', 32);
	return (0);
}*/
