#include <unistd.h>
#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int a;
        a = 0;

        if (str[0] == '\0')
        {
                return (1);
        }
        while (str[a] != '\0')
        {
                if (str[a] < 'A' || str[a] > 'Z')
                {
                        return (0);
                }
                a++;
        }
                return (1);
}

int     main(void)
{
        char str[] = "UPPERCASE";
        int results = ft_str_is_uppercase(str);
        printf("%d\n", results);
        return (0);
}
