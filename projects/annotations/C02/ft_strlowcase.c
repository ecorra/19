#include <unistd.h>
#include <stdio.h>

char    *ft_strlowcase(char *str)
{

        char *copy;
        int a;
        a = 0;

        copy = str;

        while (str[a] != '\0')
        {
                if (str[a] >= 'A' & str[a] <= 'Z')
                {
                        str[a] = copy[a] + 32;
                }
                a++;
        }
                return str;
}

char     main(void)
{
        char str[] = "LOWCASE";
        char *results = ft_strlowcase(str);

        printf("%s\n", results);

        return (0);
}
