#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void)
{
	int num = 48;  //We shall be using ASCII table for this problem due to machine interpretations
	

	while (num < 58)  //48 = 0 and 58 = 9 in ASCII
	{
		write(1, &num, 1);
		num++;
	}
}
