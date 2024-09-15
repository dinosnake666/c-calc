#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);

int	ft_multi(int num1, int num2)
{
	int	result;

	result = 0;
	while (num1)
	{
		if (num1 < 0)
		{
			result = result - num2;
			num1++;
		}
		else
		{
			result = result + num2;
			num1--;
		}
	}
	return (result);
}

int	ft_power(int num, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (result);
	while (power)
	{
		result = ft_multi(num, result);
		power--;
	}
	return (result);
}

void	ft_multi_power(int num1, char op, int num2)
{
	if (op == 'x')
	{
		ft_putstr("The result is : ");
		ft_putnbr(ft_multi(num1, num2));
	}
	else
	{
		ft_putstr("The result is : ");
		ft_putnbr(ft_power(num1, num2));
	}
}
