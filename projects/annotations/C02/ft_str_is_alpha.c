#include <unistd.h>
#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
        int a;
        a = 0;


        while (str[a] != '\0')
        {
                if ((str[a] < 'A' || str[a] > 'Z') || (str[a] < 'a' || str[a] > 'z')) // at least this gets you an output                                                          {
                        return (0);
                }
                a++;
        }
        return (1);
}

int     main(void)
{
        char str[] = "ftstrisqlpha";
        int result = ft_str_is_alpha(str); // int results = the return() of the called functions
        printf("%d\n", result);
        return (0);
}
