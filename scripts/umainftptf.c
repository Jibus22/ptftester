
#include "ft_printf.h"
#include <limits.h>

int		main(void)
{
	unsigned int		d;

	d = 4242420;
	ft_printf("d :\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("%u", d);
	ft_printf("\n%u", d);
	ft_printf("\nEssai : 		|%u|\n", d);
	ft_printf("Double : 		|%u%u|\n", d, d);
	ft_printf("Larg 16 :		|%16u|\n", d);
	ft_printf("*Larg 16 :		|%*u|\n",16, d);
	ft_printf("larg 6 :		|%6u|\n", d);
	ft_printf("*larg 6 :		|%*u|\n",6, d);
	ft_printf("*Larg -16 :		|%*u|\n",-16, d);
	ft_printf("Flag '-' : 		|%-16u|\n", d);
	ft_printf("Flag '-' x3 :		|%---16u|\n", d);
	ft_printf("Flag '0' : 		|%016u|\n", d);
	ft_printf("Flag '0' x3 :		|%00016u|\n", d);
	ft_printf("Prec 8 :		|%.8u|\n", d);
	ft_printf("*Prec 8 :		|%.*u|\n",8, d);
	ft_printf("*prec -8 :		|%.*u|\n",-8, d);
	ft_printf("Prec 0 :		|%.0u|\n", d);
	ft_printf("*Prec 0 :		|%.*u|\n",0, d);
	ft_printf("Prec . :		|%.u|\n", d);
	ft_printf("prec 15 :		|%.15u|\n", d);
	ft_printf("*prec 15 :		|%.*u|\n",15, d);
	ft_printf("*Prec 8 :		|%.*u|\n",8, d);
	ft_printf("L && P :		|%16.8u|\n", d);
	ft_printf("*L && *P :		|%*.*u|\n",16, 8, d);
	ft_printf("l && P :		|%4.8u|\n", d);
	ft_printf("*l && *P :		|%*.*u|\n",4, 8, d);
	ft_printf("L && p :		|%16.18u|\n", d);
	ft_printf("*L && *p :		|%*.*u|\n",16, 18, d);
	ft_printf("l && p :		|%6.18u|\n", d);
	ft_printf("*l && *p :		|%*.*u|\n",6, 18, d);
	ft_printf("UINTMAX - :		|%-*u|\n",30, UINT_MAX);
	ft_printf("UINTMAX L30P20 :	|%*.*u|\n",30, 20, UINT_MAX);
	ft_printf("0 - :			|%-*u|\n",30, 0);
	ft_printf("0 L30P20 :		|%*.*u|\n",30, 20, 0);
	ft_printf("\n--------DOUBLE------:\n\n");
	ft_printf("D Larg 16 :		|%16u%16u|\n", d, d);
	ft_printf("D *Larg 16 :		|%*u%*u|\n",16, d,16, d);
	ft_printf("D larg 6 :		|%6u%6u|\n", d, d);
	ft_printf("D *larg 6 :		|%*u%*u|\n",6, d,6, d);
	ft_printf("D *Larg -16 :		|%*u%*u|\n",-16, d,-16, d);
	ft_printf("D Flag '-' : 		|%-16u%-16u|\n", d, d);
	ft_printf("D Flag '-' x3 :		|%---16u%---16u|\n", d, d);
	ft_printf("D Prec 8 :		|%.8u%.8u|\n", d, d);
	ft_printf("D *Prec 8 :		|%.*u%.*u|\n",8, d,8, d);
	ft_printf("D *prec -8 :		|%.*u%.*u|\n",-8, d,-8, d);
	ft_printf("D Prec 0 :		|%.0u%.0u|\n", d, d);
	ft_printf("D *Prec 0 :		|%.*u%.*u|\n",0, d,0, d);
	ft_printf("D Prec . :		|%.u%.u|\n", d, d);
	ft_printf("D prec 15 :		|%.15u%.15u|\n", d, d);
	ft_printf("D *prec 15 :		|%.*u%.*u|\n",15, d,15, d);
	ft_printf("D *Prec 8 :		|%.*u%.*u|\n",8, d,8, d);
	ft_printf("D L && P :		|%16.8u%16.8u|\n", d, d);
	ft_printf("D *L && *P :		|%*.*u%*.*u|\n",16, 8, d,16, 8, d);
	ft_printf("D l && P :		|%4.8u%4.8u|\n", d, d);
	ft_printf("D *l && *P :		|%*.*u%*.*u|\n",4, 8, d,4, 8, d);
	ft_printf("D L && p :		|%16.18u%16.18u|\n", d, d);
	ft_printf("D *L && *p :		|%*.*u%*.*u|\n",16, 18, d,16, 18, d);
	ft_printf("D l && p :		|%6.18u%6.18u|\n", d, d);
	ft_printf("D *l && *p :		|%*.*u%*.*u|\n",6, 18, d,6, 18, d);
	ft_printf("-------------u = 0----------\n");
	d = 0;
	ft_printf("Larg 16 :		|%16u|\n", d);
	ft_printf("*Larg 16 :		|%*u|\n",16, d);
	ft_printf("larg 6 :		|%6u|\n", d);
	ft_printf("*larg 6 :		|%*u|\n",6, d);
	ft_printf("*Larg -16 :		|%*u|\n",-16, d);
	ft_printf("Flag '-' : 		|%-16u|\n", d);
	ft_printf("Flag '-' x3 :		|%---16u|\n", d);
	ft_printf("Flag '0' : 		|%016u|\n", d);
	ft_printf("Flag '0' x3 :		|%00016u|\n", d);
	ft_printf("Prec 8 :		|%.8u|\n", d);
	ft_printf("*Prec 8 :		|%.*u|\n",8, d);
	ft_printf("*prec -8 :		|%.*u|\n",-8, d);
	ft_printf("Prec 0 :		|%.0u|\n", d);
	ft_printf("*Prec 0 :		|%.*u|\n",0, d);
	ft_printf("Prec . :		|%.u|\n", d);
	ft_printf("prec 15 :		|%.15u|\n", d);
	ft_printf("*prec 15 :		|%.*u|\n",15, d);
	ft_printf("*Prec 8 :		|%.*u|\n",8, d);
	ft_printf("L && P :		|%16.8u|\n", d);
	ft_printf("*L && *P :		|%*.*u|\n",16, 8, d);
	ft_printf("l && P :		|%4.8u|\n", d);
	ft_printf("*l && *P :		|%*.*u|\n",4, 8, d);
	ft_printf("L && p :		|%16.18u|\n", d);
	ft_printf("*L && *p :		|%*.*u|\n",16, 18, d);
	ft_printf("l && p :		|%6.18u|\n", d);
	ft_printf("*l && *p :		|%*.*u|\n",6, 18, d);
	return (1);
}
