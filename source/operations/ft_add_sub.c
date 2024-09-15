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
	else
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 - num2);
	}
}
