#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putchaine(char *chaine);
int ft_chaine_longueur(char *chaine);
void ft_putnbr(int nb);

int main()
{
	char *texte = "Evan, je t'adore de plus en plus.";

	ft_putchaine(texte);
	ft_putchar('\n');

	write(STDOUT_FILENO, "La longueur de cette chaine est: ", 33);
	ft_putchar('\n');

	int longueur = ft_chaine_longueur(texte);
	ft_putnbr(longueur);
	ft_putchar('\n');

	return 0;
}

void ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void ft_putchaine(char *chaine)
{
	int i = 0;
	while (chaine[i] != '\0')
	{
		ft_putchar(chaine[i]);
		i++;
	}
}

int ft_chaine_longueur(char *chaine)
{
	int longueur = 0;
	while (chaine[longueur] != '\0')
	{
		longueur++;
	}
	return longueur;
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}
