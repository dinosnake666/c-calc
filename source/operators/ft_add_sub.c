#include <unistd.h>
#include "../headers/string_manipulation.h"

void	ft_add_sub(int num1, char op, int num2)
{
	if (op == '+')
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 + num2);
		write(1, "\n", 1);
	}
	else
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 - num2);
		write(1, "\n", 1);
	}
}
