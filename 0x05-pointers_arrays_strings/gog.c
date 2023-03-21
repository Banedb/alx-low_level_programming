#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
        int ascii = 2772, i = 0, random;
        char password[100];
        srand(time(NULL));
        while (ascii > 126)
        {
                random = rand() % 126;
                password[i] = random;
                ascii -= random;
                i++;
        }
        if (ascii > 0)
		password[i] = ascii;
        else
                i--;
        printf("%s", password);
        return (0);
}
