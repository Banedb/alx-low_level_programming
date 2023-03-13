#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, randomizer;
	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char signs[] = "~!@#$%^&*()_- +=[]{};':\"<>,.?/\\|";
	char password[10];

	srand(time(NULL));
	randomizer = rand() % 4;

	for (i = 0; i < 10; i++)
	{
		if (randomizer == 3)
		{
			password[i] = numbers[(rand() % 10)];
			printf("%c", password[i]);
			randomizer = rand() % 4;
		}
		else if (randomizer == 2)
		{
			password[i] = letters[(rand() % 26)];
			printf("%c", password[i]);
			randomizer = rand() % 4;
		}
		else if (randomizer == 1)
		{
			password[i] = LETTERS[(rand() % 28)];
			printf("%c", password[i]);
			randomizer = rand() % 4;
		}
		else
		{
			password[i] = signs[(rand() % 28)];
			printf("%c", password[i]);
			randomizer = rand() % 4;
		}
	}
	return (0);
}
