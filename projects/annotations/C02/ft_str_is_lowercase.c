#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int a;
        a = 0;

	if (str[0] == '\0')// "==" not "=" dummy don't forget again
	{
		return (1);
	}
	while (str[a] != '\0')// loops till '\0'
	{
		if (str[a] < 'a' || str[a] > 'z')// if ASCII values is lower than 'a' OR greater than 'z': emcompasses alphabet
		{
			return (0);
		}
		a++;
	}
		return (1);
}

int	main(void)
{
	char str[] = "lowercase";//declare str[]
	int results = ft_str_is_lowercase(str);//declase return
	printf("%d\n", results);
	return (0);
}
