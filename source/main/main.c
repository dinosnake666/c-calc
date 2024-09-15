#include <unistd.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_add_sub(int num1, char op, int num2);
void	ft_div_mod(int num1, char op, int num2);
void	ft_multi_power(int num1, char op, int num2);

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	char	op;
	
	if (argc != 4)
		ft_putstr("\aFormat error\nFormat : NUM1 OPERATOR NUM2\n");
	else
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);

		if (ft_strlen(argv[2]) != 1)
			ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /\n");
		else
		{
			op = argv[2][0];
			if (op == 'x' || op == 'p')
				ft_multi_power(num1, op, num2);
			else if (op == '-' || op == '+')
				ft_add_sub(num1, op, num2);
			else if (op == '%' || op == '/')
				ft_div_mod(num1, op, num2);
			else
				ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /\n");
		}
	}
	return (0);
}
