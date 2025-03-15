/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:46:44 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/23 20:46:44 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
/* Let’s take an example string: "hello, world!".

    Initial state:
        String: "hello, world!"
        j = 1 (since the first character is the start of the string, so it’s treated like a word boundary).

    Processing the first word ("hello"):
        "h" is a lowercase letter and j == 1, so we capitalize it to "H".
        We then set j = 0 because we've now moved inside the word.

    Processing the non-alphabetic character (,):
        We encounter a comma, so j is set to 1 because commas (or other non-alphabetic characters) mark the end of a word.
        The next letter after the comma will be treated as the start of a new word.

    Processing the second word ("world"):
        "w" is a lowercase letter and j == 1, so we capitalize it to "W".
        We then set j = 0 to continue inside the word.

    Final output: "Hello, World!" 
    */
char    *ft_strlowcase(char *str)
{
        int     a;

        a = 0;
        while (str[a] != '\0')
        {
                if (str[a] >= 'A' && str[a] <= 'Z')
                {
                        str[a] = str[a] + 32;
                }
                a++;
        }
        return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/* The Process Behind the j == 1 Logic:

    When j == 1:
        We explicitly set j = 1 when we encounter certain characters, like spaces, punctuation, or at the beginning of the string. This tells us that the next alphabetic character (i.e., letter) should be treated as the start of a word and therefore needs to be capitalized.
        Manually tracking: The program doesn’t automatically know this. The flag j is just a flag we use to keep track of where we are in the string, and the value of j tells us if we are at the beginning of a word.

    When j == 0:
        Once we're inside a word (after the first letter), we set j = 0. This means that subsequent letters are treated as part of the word, and we don't capitalize them.
        What happens when j == 0: As we encounter more alphabetic characters (i.e., letters), the program keeps j = 0, so it skips the capitalization process for these letters.

How j gets set to 1 (start of a new word):

    Initially, j = 1 (when we're at the start of the string).
    Whenever we encounter a non-alphabetic character (like spaces, punctuation, etc.), we manually set j = 1, marking that the next letter will be the start of a new word.
    This ensures that only the first letter after a non-alphabetic character gets capitalized.
    */
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
