#include <unistd.h>
#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
        int a;
        a = 0;


        while (str[a] != '\0')
        {
                if ((str[a] >= 'A' && str[a] <= 'Z') || (str[a] >= 'a' && str[a] <= 'z'))                                                      {
                        a++;
                }
        }
        return (1);


int     main(void)
{
        char str[] = "ftstrisqlpha";
        ft_str_is_alpha(str);
        printf("%d\n", str);
        return (0);
} 
