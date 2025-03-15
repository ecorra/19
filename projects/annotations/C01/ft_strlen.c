#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a = 0;

	while (str[a] != '\0')// while stringcount[a] inequal (null terminator)
	{
		a++;
	}
	return (a);
}

int     main(char *str)
{
	str = "qwertychairphlegm";
	printf("%d", ft_strlen(str));
	return (0);
}
