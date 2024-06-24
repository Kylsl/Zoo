#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nbr);
void ft_swap(int *a, int *b);

int main()
{
	int x = 42;
	int y = 24;

	write(STDOUT_FILENO, "Avant l'echange:\n", 17);
	ft_putnbr(x);
	ft_putchar(' ');
	ft_putnbr(y);
	ft_putchar('\n');

	ft_swap(&x, &y);

	write(STDOUT_FILENO, "Apres l'echange:\n", 17);
	ft_putnbr(x);
	ft_putchar(' ');
	ft_putnbr(y);
	ft_putchar('\n');

	return 0;
}

void ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if ( nbr >= 10)
	{
		ft_putnbr( nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

void ft_swap(int* a, int *b)
{
	int temps;
	temps = *a;
	*a = *b;
	*b = temps;
}
