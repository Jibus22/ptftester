
#include <stdio.h>
#include <limits.h>

int		main(void)
{
	printf("%%");
	printf("\n%%");
	printf("\nEssai : 		|%%|\n");
	printf("Double : 		|%%%%|\n");
	printf("Larg 16 :		|%16%|\n");
	printf("*Larg 16 :		|%*%|\n",16);
	printf("larg 6 :		|%6%|\n");
	printf("*larg 6 :		|%*%|\n",6);
	printf("*Larg -16 :		|%*%|\n",-16);
	printf("Flag '-' : 		|%-16%|\n");
	printf("Flag '-' x3 :		|%---16%|\n");
	printf("Flag '0' : 		|%016%|\n");
	printf("Flag '0' x3 :		|%00016%|\n");
	printf("Prec 8 :		|%.8%|\n");
	printf("*Prec 8 :		|%.*%|\n",8);
	printf("*prec -8 :		|%.*%|\n",-8);
	printf("Prec 0 :		|%.0%|\n");
	printf("*Prec 0 :		|%.*%|\n",0);
	printf("Prec . :		|%.%|\n");
	printf("prec 15 :		|%.15%|\n");
	printf("*prec 15 :		|%.*%|\n",15);
	printf("*Prec 8 :		|%.*%|\n",8);
	printf("L && P :		|%16.8%|\n");
	printf("*L && *P :		|%*.*%|\n",16, 8);
	printf("l && P :		|%4.8%|\n");
	printf("*l && *P :		|%*.*%|\n",4, 8);
	printf("L && p :		|%16.18%|\n");
	printf("*L && *p :		|%*.*%|\n",16, 18);
	printf("l && p :		|%6.18%|\n");
	printf("*l && *p :		|%*.*%|\n",6, 18);
	printf("\n--------DOUBLE------:\n\n");
	printf("D Larg 16 :		|%16%%16%|\n");
	printf("D *Larg 16 :		|%*%%*%|\n",16 ,16);
	printf("D larg 6 :		|%6%%6%|\n");
	printf("D *larg 6 :		|%*%%*%|\n",6 ,6);
	printf("D *Larg -16 :		|%*%%*%|\n",-16 ,-16);
	printf("D Flag '-' : 		|%-16%%-16%|\n");
	printf("D Flag '-' x3 :		|%---16%%---16%|\n");
	printf("D Prec 8 :		|%.8%%.8%|\n");
	printf("D *Prec 8 :		|%.*%%.*%|\n",8 ,8);
	printf("D *prec -8 :		|%.*%%.*%|\n",-8 ,-8);
	printf("D Prec 0 :		|%.0%%.0%|\n");
	printf("D *Prec 0 :		|%.*%%.*%|\n",0 ,0);
	printf("D Prec . :		|%.%%.%|\n");
	printf("D prec 15 :		|%.15%%.15%|\n");
	printf("D *prec 15 :		|%.*%%.*%|\n",15 ,15);
	printf("D *Prec 8 :		|%.*%%.*%|\n",8 ,8);
	printf("D L && P :		|%16.8%%16.8%|\n");
	printf("D *L && *P :		|%*.*%%*.*%|\n",16, 8 ,16, 8);
	printf("D l && P :		|%4.8%%4.8%|\n");
	printf("D *l && *P :		|%*.*%%*.*%|\n",4, 8 ,4, 8);
	printf("D L && p :		|%16.18%%16.18%|\n");
	printf("D *L && *p :		|%*.*%%*.*%|\n",16, 18 ,16, 18);
	printf("D l && p :		|%6.18%%6.18%|\n");
	printf("D *l && *p :		|%*.*%%*.*%|\n",6, 18 ,6, 18);
	return (1);
}
