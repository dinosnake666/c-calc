#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);
int	ft_multi(int num1, int num2);
int     ft_power(int num, int power);

int	ft_factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0 || num == 1)
		return (1);
	return (ft_multi(num, ft_factorial(num - 1)));
}

int	ft_sqrt(int num)
{
	int	result;

	result = 0;
	while (ft_power(result, 2) != num && result <= num / 2)
		result++;
	if (ft_power(result, 2) == num)
		return (result);
	else
		return (-1);
}

void	ft_fact_sqrt(int num, char op)
{
	if (num < 0)
	{
		ft_putstr("Error : UNDEFINED\n");
		return ;
	}
	if (op == 's')
	{
		if (ft_sqrt(num) < 0)
			ft_putstr("The result is either undefined or not an integer");
		else
		{
			ft_putstr("The result is : ");
			ft_putnbr(ft_sqrt(num));
		}
	}
	else
	{
		ft_putstr("The result is : ");
		ft_putnbr(ft_factorial(num));
	}
}
