#include <unistd.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	calculator(int num1, char op, int num2);

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	char	op;
	
	if (argc != 4)
		ft_putstr("Format error\nFormat : NUM1 OPERAND NUM2\n");
	else
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);

		if (ft_strlen(argv[2]) != 1)
			ft_putstr("Format error\nAccepted operands : +, -\n");
		else
		{
			op = argv[2][0];
			calculator(num1, op, num2);
		}
	}
	return (0);
}

