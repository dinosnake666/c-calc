int	ft_strlen(char *str);

int	ft_strlen_cmp(char *s1, char *s2)
{
	if (ft_strlen(s1) - ft_strlen(s2))
		return (0);
	else
		return (1);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	if (ft_strlen_cmp(argv[1], argv[2]))
		printf("The two strings have the same lenght\n");
	else
		printf("The two strings have different lengths\n");
	return (0);
}*/
