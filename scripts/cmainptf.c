
#include <stdio.h>

int			main(void)
{
	char	str;

	str = 'c';
	printf("c test :\n");
	printf("");
	printf("\n");
	printf("%c", str);
	printf("\n%c", str);
	printf("\nEssai : 		|%c|\n", str);
	printf("Double : 		|%c%c|\n", str, str);
	printf("Larg 16 :		|%16c|\n", str);
	printf("*Larg 16 :		|%*c|\n",16, str);
	printf("larg 6 :		|%6c|\n", str);
	printf("*larg 6 :		|%*c|\n",6, str);
	printf("*Larg -16 :		|%*c|\n",-16, str);
	printf("Prec . :		|%.c|\n", str);
	printf("NULL -10 :		|%-*c|\n",10, '\0');
	printf("NULL L10 :		|%*c|\n",10, '\0');
	printf("\n--------DOUBLE------:\n\n");
	printf("D Larg 16 :		|%16c%16c|\n", str, str);
	printf("D *Larg 16 :		|%*c%*c|\n",16, str,16, str);
	printf("D larg 6 :		|%6c%6c|\n", str, str);
	printf("D *larg 6 :		|%*c%*c|\n",6, str,6, str);
	printf("D *Larg -16 :		|%*c%*c|\n",-16, str,-16, str);
	printf("D Prec . :		|%.c%.c|\n", str, str);
	return (1);
}
