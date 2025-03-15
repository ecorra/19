#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
	int     a;// initiate a for buffer adress
	a = 0;

        while (src[a] != '\0')// while src[character in string/buffer adress] isn't null terminator
        {
		dest[a] = src[a]; // dest get overwritten by src
		a++; // increment buffer adress to move to next character
	}
		dest[a] = '\0';// copy '\0' to dest[7]; nullifiyng rest of string.

		return (dest);// returns dest string
	
}

int	main(void)
{
	char src[30] = "source";// setting src as a string with (char src[]) and setting buffer at 30
	char dest[30] = "destination";

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strcpy(dest, src);

	printf("%s\n", src);// print after
	printf("%s", dest);

	return (0);
}
