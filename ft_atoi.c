int	ft_atoi(char *str)
{
	int	index;
	int	sign_count;
	int	num;
	int	symb;

	index = 0;
	sign_count = 0;
	num = 0;
	symb = 0;
	while (str[index] == ' ' || str[index] == '\n'
			|| str[index] == '\v' || str[index] == '\t'
			|| str[index] == '\r'|| str[index] == '\f')
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign_count++;
		index++;
		symb++;
	}
	while ('0' <= str[index] && str[index]<= '9')
	{
		num = (num * 10) + (str[index] - '0');
		index++;
	}
	if ((sign_count % 2 == 0) && symb <= 1)
		return(num);
	else if (symb <= 1)
		return(num * -1);
	else 
		return (0);
}
