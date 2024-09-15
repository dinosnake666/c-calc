#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);

void	ft_div_mod(int num1, char op, int num2)
{
	int	div;
	int	mod;

	div = 0;
	if (num2 == 0)
	{
		ft_putstr("Error : UNDEFINED");
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
	}
	else if (op == '%')
	{
		ft_putstr("The result is : ");
		ft_putnbr(mod);
	}
}
