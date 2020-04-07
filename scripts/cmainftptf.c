
#include "ft_printf.h"

int			main(void)
{
	char	str;

	str = 'c';
	ft_printf("c test :\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("%c", str);
	ft_printf("\n%c", str);
	ft_printf("\nEssai : 		|%c|\n", str);
	ft_printf("Double : 		|%c%c|\n", str, str);
	ft_printf("Larg 16 :		|%16c|\n", str);
	ft_printf("*Larg 16 :		|%*c|\n",16, str);
	ft_printf("larg 6 :		|%6c|\n", str);
	ft_printf("*larg 6 :		|%*c|\n",6, str);
	ft_printf("*Larg -16 :		|%*c|\n",-16, str);
	ft_printf("Prec . :		|%.c|\n", str);
	ft_printf("NULL -10 :		|%-*c|\n",10, '\0');
	ft_printf("NULL L10 :		|%*c|\n",10, '\0');
	ft_printf("\n--------DOUBLE------:\n\n");
	ft_printf("D Larg 16 :		|%16c%16c|\n", str, str);
	ft_printf("D *Larg 16 :		|%*c%*c|\n",16, str,16, str);
	ft_printf("D larg 6 :		|%6c%6c|\n", str, str);
	ft_printf("D *larg 6 :		|%*c%*c|\n",6, str,6, str);
	ft_printf("D *Larg -16 :		|%*c%*c|\n",-16, str,-16, str);
	ft_printf("D Prec . :		|%.c%.c|\n", str, str);
	return (1);
}
