#include <stdlib.h>
#include <stdio.h>

int main()
{
	int number_one;
	int number_two;
	char operation;
	printf("Bonjour, quel est l'opération que vous souhaitez faire ?: +, -, *, /, %");
	scanf("%c", &operation);
	printf("Veuillez saisir votre premier nombre");
	scanf("%d", &number_one);
        printf("Veuillez maintenant saisir votre deuxième nombre");
        scanf("%d", &number_two);
	exit(0);
}
