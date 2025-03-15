#include <unistd.h>
#include <stdio.h>

/*"basically strcpy but will stop copying after buffer space excedded (truncation)
 * one apporch would be to copy and once all character have been matched rewrite last common character +1 as "\0";
 * okay so strlcpy seems to work both with string and array therefore size -1 would be the way to go*/

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a = 0;// "initiate var a for return of new string lenght"
	unsigned int r = 0;

	while (src[a] != '\0' && a < size - 1 )// "loops until '\0' is encountered or increment to last char -1 (-1 for array because strlcpy inserts a '\0')
	{
		dest[a] = src[a]; // "rewrittes dest[a] with src[a]"
		a++;
	}
	
	if (src[a] == size) // "inserts '\0' at final spot in buffer size
	{
		dest[a] = '\0';
	}
	
	while (src[r] != '\0' || r < size)// "this is to count src lenghts"
	{
		r++;
	}
	return (r);
}

unsigned int main(void)
{
	char	src[] = "What if it's an array? well seems i got it covered hehe";
	char	dest[15];
	unsigned int size = 15;
	unsigned int results = ft_strlcpy(dest, src, size);

	printf("Destination:%s\n", dest); 
	printf("Source length:%d\n", results);

	return (0);
}			
