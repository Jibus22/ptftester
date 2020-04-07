
#include "ft_printf.h"

int			main(void)
{
	char	*str;

	str = "Hello World!";
	ft_printf("S :\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("%s", str);
	ft_printf("\n%s", str);
	ft_printf("\nEssai : 		|%s|\n", str);
	ft_printf("Double : 		|%s%s|\n", str, str);
	ft_printf("Larg 16 :		|%16s|\n", str);
	ft_printf("*Larg 16 :		|%*s|\n",16, str);
	ft_printf("larg 6 :		|%6s|\n", str);
	ft_printf("*larg 6 :		|%*s|\n",6, str);
	ft_printf("*Larg -16 :		|%*s|\n",-16, str);
	ft_printf("Flag '-' : 		|%-16s|\n", str);
	ft_printf("Flag '-' x3 :		|%---16s|\n", str);
	ft_printf("Prec 8 :		|%.8s|\n", str);
	ft_printf("*Prec 8 :		|%.*s|\n",8, str);
	ft_printf("*prec -8 :		|%.*s|\n",-8, str);
	ft_printf("Prec 0 :		|%.0s|\n", str);
	ft_printf("*Prec 0 :		|%.*s|\n",0, str);
	ft_printf("Prec . :		|%.s|\n", str);
	ft_printf("prec 15 :		|%.15s|\n", str);
	ft_printf("*prec 15 :		|%.*s|\n",15, str);
	ft_printf("*Prec 8 :		|%.*s|\n",8, str);
	ft_printf("L && P :		|%16.8s|\n", str);
	ft_printf("*L && *P :		|%*.*s|\n",16, 8, str);
	ft_printf("l && P :		|%4.8s|\n", str);
	ft_printf("*l && *P :		|%*.*s|\n",4, 8, str);
	ft_printf("L && p :		|%16.18s|\n", str);
	ft_printf("*L && *p :		|%*.*s|\n",16, 18, str);
	ft_printf("l && p :		|%6.18s|\n", str);
	ft_printf("*l && *p :		|%*.*s|\n",6, 18, str);
	ft_printf("NULL - :		|%-*s|\n",10, NULL);
	ft_printf("NULL LP :		|%*.*s|\n",10, 4, NULL);
	ft_printf("\n--------DOUBLE------:\n\n");
	ft_printf("D Larg 16 :		|%16s%16s|\n", str, str);
	ft_printf("D *Larg 16 :		|%*s%*s|\n",16, str,16, str);
	ft_printf("D larg 6 :		|%6s%6s|\n", str, str);
	ft_printf("D *larg 6 :		|%*s%*s|\n",6, str,6, str);
	ft_printf("D *Larg -16 :		|%*s%*s|\n",-16, str,-16, str);
	ft_printf("D Flag '-' : 		|%-16s%-16s|\n", str, str);
	ft_printf("D Flag '-' x3 :		|%---16s%---16s|\n", str, str);
	ft_printf("D Prec 8 :		|%.8s%.8s|\n", str, str);
	ft_printf("D *Prec 8 :		|%.*s%.*s|\n",8, str,8, str);
	ft_printf("D *prec -8 :		|%.*s%.*s|\n",-8, str,-8, str);
	ft_printf("D Prec 0 :		|%.0s%.0s|\n", str, str);
	ft_printf("D *Prec 0 :		|%.*s%.*s|\n",0, str,0, str);
	ft_printf("D Prec . :		|%.s%.s|\n", str, str);
	ft_printf("D prec 15 :		|%.15s%.15s|\n", str, str);
	ft_printf("D *prec 15 :		|%.*s%.*s|\n",15, str,15, str);
	ft_printf("D *Prec 8 :		|%.*s%.*s|\n",8, str,8, str);
	ft_printf("D L && P :		|%16.8s%16.8s|\n", str, str);
	ft_printf("D *L && *P :		|%*.*s%*.*s|\n",16, 8, str,16, 8, str);
	ft_printf("D l && P :		|%4.8s%4.8s|\n", str, str);
	ft_printf("D *l && *P :		|%*.*s%*.*s|\n",4, 8, str,4, 8, str);
	ft_printf("D L && p :		|%16.18s%16.18s|\n", str, str);
	ft_printf("D *L && *p :		|%*.*s%*.*s|\n",16, 18, str,16, 18, str);
	ft_printf("D l && p :		|%6.18s%6.18s|\n", str, str);
	ft_printf("D *l && *p :		|%*.*s%*.*s|\n",6, 18, str,6, 18, str);
	return (1);
}
