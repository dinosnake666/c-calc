#include "../headers/string_manipulation.h"
#include "../headers/operators.h"

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	char	op;
	
	if (argc == 4)
	{	
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);

		if (ft_strlen(argv[2]) != 1)
			ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /, s, f\n");
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
				ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /, s, f\n");
		}
	}
	else if (argc == 3)
	{
		num1 = ft_atoi(argv[1]);
		if (ft_strlen(argv[2]) != 1)
			ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /, s, f\n");
		else
		{
			op = argv[2][0];
			if (op == 's' || op == 'f')
				ft_fact_sqrt(num1, op);
			else
				ft_putstr("\aFormat error\nAccepted operators : +, -, x, p, %, /, s, f\n");
		}
	}
	else
		ft_putstr("\aFormat error\nFormats : NUM1 OPERATOR NUM2 || NUM OPERATOR\n");
	return (0);
}
