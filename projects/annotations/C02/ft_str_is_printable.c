#include <unistd.h>
#include <stdio.h>

int     ft_str_is_printable(char *str)
{
        int a;
        a = 0;

        if (str[0] == '\0')
        {
                return (1);
        }
        while (str[a] != '\0')
        {
                if (str[a] < ' ' || str[a] > '~')
                {
                        return (0);
                }
                a++;
        }
                return (1);
}

int     main(void)
{
        char str[] = "printable"; // CRTL + H to type backspace non printabl(\b)
	int results = ft_str_is_printable(str);
        
	printf("%d\n", results);
        
	return (0);
/* printable characters are ASCII value range 32-126 */
}
