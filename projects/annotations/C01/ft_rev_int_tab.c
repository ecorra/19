#include <unistd.h>
#include <stdio.h>
/* "Create a function which reverses a given array of integer (first goes last, etc).
• The arguments are a pointer to int and the number of ints in the array.
• Here’s how it should be prototyped" : */
void ft_rev_int_tab(int *tab, int size)
{
        int  a = 0;// "setting variable 'a' for first position in array, variable 'b' for last position (write -1)
        int  b = size - 1;//"-1 because array are ZERO INDEXED! SEE IMPORTANT NOTE IN MAIN"
        int  c; // "declared for swap"
        while (a < b)// "you choose inferior not equal because it seemed easier to manage odd/even, but maybe equal could work?"
        {
                c = tab[a];
                tab[a] = tab[b];// "swapping a with b (refer to ft_swap if consufed);
                tab[b] = c;
                a++;
                b--;// "increment positioning in array for a and decrement for b"
        }
}

/* "slight new direction assuming that because i set the array i'm also given the size of the array and i don't have to try to determine it first
 * how to halve the count to inverse arr[2] and arr[4].
 * need to be smtg like [a,b,c,d,f]
 * a = f and b = d and c never changes?
 * but what happens if the array count is even? */
int     main(void)
{
        int     size = 6;// "##IMPORTANT!!## ARRAY SIZE COUNT IS 0 INDEXED( first position = 0 last = size - 1" "##IMPORTANT!!##"
        int     tab[] = {0 ,1 ,2 ,3 ,4 ,5 };//"this how you declare an array of int"

        ft_rev_int_tab(tab, size);

        for (int i = 0; i < size; i++)//"i lost so much time, the internet is your friend
    {
        printf("%d ", tab[i]);
    }

        return (0);
}
