#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);

void	ft_multi(int num1, int num2)
{
	int	result;

	result = 0;
	ft_putstr("The result is : ");
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
	ft_putnbr(result);
}

/*int	main(void)
{
	ft_multi(50, 8);
}*/
