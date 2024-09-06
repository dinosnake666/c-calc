long long int	ft_atoll(char *str) // does not manage over/underflows
{
	unsigned int	index;
	unsigned int	sign_count;
	long long int	num;

	index = 0;
	sign_count = 0;
	num = 0;

	while ((str[index] >= 8 && str[index] <= 13) || (str[index] == 32)) //ignores whitespaces
		index++;
	while (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign_count++;
		index++;
	}
	while ('0' <= str[index] && str[index]<= '9')
	{
		num = (num * 10) + (str[index] - '0'); //converting process from str to int
		index++;
	}
	if ((sign_count % 2 == 0))
		return(num);
	else
		return(-num);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Converted by ft_atoll : %lld\t", ft_atoll(argv[1]));
		printf("Converted by atoll : %lld\n", atoll(argv[1]));
	}
	else
		printf("Error : argument count is not matching\n");
	return (0);
}*/
