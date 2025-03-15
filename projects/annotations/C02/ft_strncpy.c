#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int a; // initiate as variable for string buffer
        a = 0;

        while (a < n && src[a] != '\0') // double conditions, (the order matters that was the issue ffs)
        {
		dest[a] = src[a]; // example: src[1] overwrites dest[1] character 
                a++;
	}
	
	while (a < n) // while src is shorter than n
	{
                dest[a] = '\0';
                a++;
	}
	dest[n] = '\0';
	return (dest);
}

int     main(void)
{
	char src[30] = "source";
        char dest[30] = "destination"; // set at 30 for margins but really its (length of str + 1)
	unsigned int n = 3;
	
	printf("%s\n", src);
        printf("%s\n", dest);

        ft_strncpy(dest, src, n);

        printf("%s\n", src);
        printf("%s\n", dest);

        return (0);
}
