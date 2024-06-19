#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar( char i);
int length_nb(int nb);

int main(int argc, char *argv[])
{
	
        (void)argc;
	(void)argv;

	ft_putnbr(-42);
	return 0;
}

void ft_putnbr(int nb)
{
	int length;
	
	length = length_nb(nb);

	if(nb<0)
	{       
		write(STDOUT_FILENO, "-", 1);
	       	while (length != 0)
	{       
		ft_putchar( -nb / length + '0');
		nb =  nb % length;
		length = length /10;
	}
	}
	
	else
	{
		while (length !=0)
		{
			ft_putchar(nb / length + '0');
			nb = nb % length;
			length = length / 10;
		}
	}
}

void ft_putchar(char i)
{
	write(STDOUT_FILENO, &i,1);
}

int length_nb(int nb)
{
	int value = 1;

	while (nb/ 10 != 0)
	{
		nb = nb / 10;
		value = value * 10;
	}
	
	return (value);
}
