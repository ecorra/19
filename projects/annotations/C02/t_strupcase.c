#include <unistd.h>
#include <stdio.h>
/* "possible approch is to copy string into a new one wit character upcase somehow*/
char	*ft_strupcase(char *str)
{
        
	char *copy; // establish char variable to copy str into(initiate as * because it's a string)
	int a;
        a = 0;

	copy = str; // copy str to src
	
	while (str[a] != '\0')
        {
                if (str[a] >= 'a' & str[a] <= 'z')// && AND not OR dummy
                {
                        str[a] = copy[a] - 32;// reducing ascii value by 32 positions which is the gap in ascii value between "a" and "A"
                }
                a++;
        }
                return str;
}

char     main(void)
{
        char str[] = "strupcase";
	char *results = ft_strupcase(str);// initiate this as * because it's a string ? it works.
        
	printf("%s\n", results);
        
	return (0);
}
