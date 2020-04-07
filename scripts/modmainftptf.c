
#include "ft_printf.h"

int		main(void)
{
	ft_printf("%%");
	ft_printf("\n%%");
	ft_printf("\nEssai : 		|%%|\n");
	ft_printf("Double : 		|%%%%|\n");
	ft_printf("Larg 16 :		|%16%|\n");
	ft_printf("*Larg 16 :		|%*%|\n",16);
	ft_printf("larg 6 :		|%6%|\n");
	ft_printf("*larg 6 :		|%*%|\n",6);
	ft_printf("*Larg -16 :		|%*%|\n",-16);
	ft_printf("Flag '-' : 		|%-16%|\n");
	ft_printf("Flag '-' x3 :		|%---16%|\n");
	ft_printf("Flag '0' : 		|%016%|\n");
	ft_printf("Flag '0' x3 :		|%00016%|\n");
	ft_printf("Prec 8 :		|%.8%|\n");
	ft_printf("*Prec 8 :		|%.*%|\n",8);
	ft_printf("*prec -8 :		|%.*%|\n",-8);
	ft_printf("Prec 0 :		|%.0%|\n");
	ft_printf("*Prec 0 :		|%.*%|\n",0);
	ft_printf("Prec . :		|%.%|\n");
	ft_printf("prec 15 :		|%.15%|\n");
	ft_printf("*prec 15 :		|%.*%|\n",15);
	ft_printf("*Prec 8 :		|%.*%|\n",8);
	ft_printf("L && P :		|%16.8%|\n");
	ft_printf("*L && *P :		|%*.*%|\n",16, 8);
	ft_printf("l && P :		|%4.8%|\n");
	ft_printf("*l && *P :		|%*.*%|\n",4, 8);
	ft_printf("L && p :		|%16.18%|\n");
	ft_printf("*L && *p :		|%*.*%|\n",16, 18);
	ft_printf("l && p :		|%6.18%|\n");
	ft_printf("*l && *p :		|%*.*%|\n",6, 18);
	ft_printf("\n--------DOUBLE------:\n\n");
	ft_printf("D Larg 16 :		|%16%%16%|\n");
	ft_printf("D *Larg 16 :		|%*%%*%|\n",16 ,16);
	ft_printf("D larg 6 :		|%6%%6%|\n");
	ft_printf("D *larg 6 :		|%*%%*%|\n",6 ,6);
	ft_printf("D *Larg -16 :		|%*%%*%|\n",-16 ,-16);
	ft_printf("D Flag '-' : 		|%-16%%-16%|\n");
	ft_printf("D Flag '-' x3 :		|%---16%%---16%|\n");
	ft_printf("D Prec 8 :		|%.8%%.8%|\n");
	ft_printf("D *Prec 8 :		|%.*%%.*%|\n",8 ,8);
	ft_printf("D *prec -8 :		|%.*%%.*%|\n",-8 ,-8);
	ft_printf("D Prec 0 :		|%.0%%.0%|\n");
	ft_printf("D *Prec 0 :		|%.*%%.*%|\n",0 ,0);
	ft_printf("D Prec . :		|%.%%.%|\n");
	ft_printf("D prec 15 :		|%.15%%.15%|\n");
	ft_printf("D *prec 15 :		|%.*%%.*%|\n",15 ,15);
	ft_printf("D *Prec 8 :		|%.*%%.*%|\n",8 ,8);
	ft_printf("D L && P :		|%16.8%%16.8%|\n");
	ft_printf("D *L && *P :		|%*.*%%*.*%|\n",16, 8 ,16, 8);
	ft_printf("D l && P :		|%4.8%%4.8%|\n");
	ft_printf("D *l && *P :		|%*.*%%*.*%|\n",4, 8 ,4, 8);
	ft_printf("D L && p :		|%16.18%%16.18%|\n");
	ft_printf("D *L && *p :		|%*.*%%*.*%|\n",16, 18 ,16, 18);
	ft_printf("D l && p :		|%6.18%%6.18%|\n");
	ft_printf("D *l && *p :		|%*.*%%*.*%|\n",6, 18 ,6, 18);
	return (1);
}
