#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
  char *buf;
  int a, b, count = 0, j, k, m = 0;
  
  for(a = 0; a < ac; a++)
    for(b = 0; av[a][b] != '\0'; b++)
      count++;
  printf("count is %d\n", count);
  printf("a is %d and b is %d\n", a,b);
  
  buf = malloc((sizeof(char) * count) + ac + 1);
  for(j = 0; j < ac; j++)
    {
      for(k = 0; av[j][k] != '\0'; k++)
      {
	buf[m] = av[j][k];
	m++;
      }
      if (av[j][k] == '\0')
	{
	  buf[m] = '\n';
	  m++;
	}
    }
  buf[m] = '\0';
  printf("m is %d\n", m);
  return (buf);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
  char *s;

  s = argstostr(ac, av);
  if (s == NULL)
    {
      return (1);
    }
  printf("%s", s);
  free(s);
  return (0);
}
