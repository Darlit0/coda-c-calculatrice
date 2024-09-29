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
	printf("Bonjour, quel est l'opération que vous souhaitez faire ?: +, -, *, /, %%\n");
	scanf("%c", &operation);
	printf("Veuillez saisir votre premier nombre\n");
	scanf("%d", &number_one);
        printf("Veuillez maintenant saisir votre deuxième nombre\n");
        scanf("%d", &number_two);
        if (operation == addition)
        {
                printf("addition\n");
        }
        else if (operation == soustraction)
        {
                printf("soustraction\n");
        }
        else if (operation == multiplication)
        {
                printf("multiplication\n");
        }
        else if (operation == division)
        {
                printf("division\n");
        }
        else if (operation == modulo)
        {
                printf("modulo\n");
        }
        else
        {
                printf("L'opérateur '%c' n'est pas reconnu\n", operation);
        }
	exit(0);
}
