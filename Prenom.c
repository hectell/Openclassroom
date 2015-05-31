#include <stdio.h>
#include <stdlib.h>

int		hl_prenom();

int		main(int argc, char *argv[])
{
	hl_prenom();
	return 0;
}

int		hl_prenom()
{
	char	prenom[100];

	printf("\n");
	printf("Bonjour... Quelle est votre prenom ?\n\n");
	scanf("%s", prenom);
	printf("Bonjour %s,\nBienvenue dans ce mini programme.\n\n", prenom);

	return 0;
}