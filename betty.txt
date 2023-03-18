#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main (void)
{
	int cont = 0;
	char entName[] = ":eman ruoy retnE yldnik yakO";
	char passw_check[10] = "betty", neg;
	char rev[] = "?eman ruoy em gnillet dnim uoy oD";
	char msg[] = ".poT eht ta uoy ees ot epoh I .od uoy sa reisae dna gnisiver neeb t'nevah uoy fi redrah teg ll'tI .!YEK si ycnetsisnoc ,rebmemeR .yadot trats uoy taht tseggus ylgnorts i ,gnisitcarp neeb t'nevah llits uoy fI .scisab llits era stcejorp esoht taht revocsid ylbaborp ll'uoy kniht I .stcejorp tsap esiver ot emit gnikat neeb ev'uoy epoh I";
	char cheers[] = ".sreehC";
	char betty[] = ".ytteB", carOn[] = "!tcerroC drowssaP";
	char anon[] = "dneirf olleH", tryAgain[] = "niaga yrT";
	char name[40], entpass[] = "drowssap retnE";
	char wrngpass[] = "drowssaP gnorW";

	while (cont == 0)
    {
        char passw[10];
        reverse(entpass);
        scanf("%s", passw);
        if (strcmp(passw, passw_check) == 0)
        {
            reverse(carOn);
            printf("\n");
            reverse(rev);
            printf("[y/n] ? ");
            scanf(" %c", &neg);
            if (neg == 'n')
            {
                printf("\n");
                reverse(entName);
                scanf("%s", name);
                printf("\n\n");
                printf("Hello %s,", name);
            }

            else
            {
                printf("\n");
                reverse(anon);
            }
            printf("\n\n");
            reverse(msg);
            reverse(cheers);
            reverse(betty);
            printf("\n");
            cont = 1;
        }
        else
        {
            printf("\n");
            reverse(wrngpass);
            reverse(tryAgain);
            printf("\n");
        }
    }
}

void reverse(char *str)
{
    int len, count;
    len = strlen(str);
    for (count = len-1; count >= 0; count--)
            {
                printf("%c", str[count]);
            }
            printf("\n");
}
