#include "../headers/string_manipulation.h"

void	ft_div_mod(int num1, char op, int num2)
{
	int	div;
	int	mod;

	div = 0;
	if (num2 == 0)
	{
		ft_putstr("Error : UNDEFINED\n");
		return ;
	}
	while (num1 >= num2)
	{
		num1 = num1 - num2;
		div++;
	}
	mod = num1;
	if (op == '/')
	{
		ft_putstr("The result is : ");
		ft_putnbr(div);
		ft_putstr("\n");
	}
	else
	{
		ft_putstr("The result is : ");
		ft_putnbr(mod);
		ft_putstr("\n");
	}
}
