#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void ft_putchaine( char *chaine);
int ft_chaine_longueur( char *chaine);

int main()
{
	char *texte = "Evan, tu es le meilleur !";

	ft_putchaine(texte);
	ft_putchar('\n');
	
	write(STDOUT_FILENO, "La longueur de cette chaine est:", 33);
	ft_putchar('\n');

	int longueur = ft_chaine_longueur(texte);

	char buffer[10];
	int i = 0;
	if (longueur == 0)
	{
		ft_putchar ('0');
	}
	else
	{
		while ( longueur > 0)
		{
			buffer[i]  = (longueur % 10) + '0';
			longueur /= 10;
			i++;
		}

		while ( i > 0) 
		{
			ft_putchar(buffer[i-1]);
			i--;
		}
	}
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
