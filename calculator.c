#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);

void	calculator(int num1, char op, int num2)
{
	if (op == '+')
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 + num2);
		write(1, "\n", 1);
	}
	else if (op == '-')
	{
		ft_putstr("The result is : ");
		ft_putnbr(num1 - num2);
		write(1, "\n", 1);
	}
	else
		ft_putstr("\aOperand error\nAccepted operands : +, -\n");
}

/*int	main(void)
{
	calculator(10, '+', 5);
	calculator(23, '-', 32);
	return (0);
}*/
