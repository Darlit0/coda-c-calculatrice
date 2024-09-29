#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number_one;
	int number_two;
	char operation;
	char addition = '+';
	char soustraction = '-';
	char multiplication = '*';
	char division = '/';
	char modulo = '%';
        int resultat;
	printf("Bonjour, quel est l'opération que vous souhaitez faire ?: +, -, *, /, %%\n");
	scanf("%c", &operation);
	printf("Veuillez saisir votre premier nombre\n");
	scanf("%d", &number_one);
        printf("Veuillez maintenant saisir votre deuxième nombre\n");
        scanf("%d", &number_two);
        if (operation == addition)
        {
		int resultat = number_one + number_two;
                printf("%d %c %d = %d\n", number_one, operation, number_two, resultat);
        }
        else if (operation == soustraction)
        {
		int resultat = number_one - number_two;
                printf("%d %c %d = %d\n", number_one, operation, number_two, resultat);
        }
        else if (operation == multiplication)
        {
		int resultat = number_one * number_two;
                printf("%d %c %d = %d\n", number_one, operation, number_two, resultat);
        }
        else if (operation == division)
        {
		if (number_two != 0)
		{
			double resultat = number_one / number_two;
                	printf("%d %c %d = %.2f\n", number_one, operation, number_two, resultat);
		}
		else
		{
			printf("Il est impossible de diviser par 0\n");
		}
        }
        else if (operation == modulo)
        {
		if (number_two != 0)
		{
			int resultat = number_one % number_two;
                	printf("%d %c %d = %d\n", number_one, operation, number_two, resultat);
		}
		else
		{
			printf("Il est impossible de diviser par 0\n");
		}

        }
        else
        {
                printf("L'opérateur '%c' n'est pas reconnu\n", operation);
        }
	exit(0);
}
