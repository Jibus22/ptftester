
#include <stdio.h>

int			main(void)
{
	char	*str;

	str = "Hello World!";
	printf("S :\n");
	printf("");
	printf("\n");
	printf("%s", str);
	printf("\n%s", str);
	printf("\nEssai : 		|%s|\n", str);
	printf("Double : 		|%s%s|\n", str, str);
	printf("Larg 16 :		|%16s|\n", str);
	printf("*Larg 16 :		|%*s|\n",16, str);
	printf("larg 6 :		|%6s|\n", str);
	printf("*larg 6 :		|%*s|\n",6, str);
	printf("*Larg -16 :		|%*s|\n",-16, str);
	printf("Flag '-' : 		|%-16s|\n", str);
	printf("Flag '-' x3 :		|%---16s|\n", str);
	printf("Prec 8 :		|%.8s|\n", str);
	printf("*Prec 8 :		|%.*s|\n",8, str);
	printf("*prec -8 :		|%.*s|\n",-8, str);
	printf("Prec 0 :		|%.0s|\n", str);
	printf("*Prec 0 :		|%.*s|\n",0, str);
	printf("Prec . :		|%.s|\n", str);
	printf("prec 15 :		|%.15s|\n", str);
	printf("*prec 15 :		|%.*s|\n",15, str);
	printf("*Prec 8 :		|%.*s|\n",8, str);
	printf("L && P :		|%16.8s|\n", str);
	printf("*L && *P :		|%*.*s|\n",16, 8, str);
	printf("l && P :		|%4.8s|\n", str);
	printf("*l && *P :		|%*.*s|\n",4, 8, str);
	printf("L && p :		|%16.18s|\n", str);
	printf("*L && *p :		|%*.*s|\n",16, 18, str);
	printf("l && p :		|%6.18s|\n", str);
	printf("*l && *p :		|%*.*s|\n",6, 18, str);
	printf("NULL - :		|%-*s|\n",10, NULL);
	printf("NULL LP :		|%*.*s|\n",10, 4, NULL);
	printf("\n--------DOUBLE------:\n\n");
	printf("D Larg 16 :		|%16s%16s|\n", str, str);
	printf("D *Larg 16 :		|%*s%*s|\n",16, str,16, str);
	printf("D larg 6 :		|%6s%6s|\n", str, str);
	printf("D *larg 6 :		|%*s%*s|\n",6, str,6, str);
	printf("D *Larg -16 :		|%*s%*s|\n",-16, str,-16, str);
	printf("D Flag '-' : 		|%-16s%-16s|\n", str, str);
	printf("D Flag '-' x3 :		|%---16s%---16s|\n", str, str);
	printf("D Prec 8 :		|%.8s%.8s|\n", str, str);
	printf("D *Prec 8 :		|%.*s%.*s|\n",8, str,8, str);
	printf("D *prec -8 :		|%.*s%.*s|\n",-8, str,-8, str);
	printf("D Prec 0 :		|%.0s%.0s|\n", str, str);
	printf("D *Prec 0 :		|%.*s%.*s|\n",0, str,0, str);
	printf("D Prec . :		|%.s%.s|\n", str, str);
	printf("D prec 15 :		|%.15s%.15s|\n", str, str);
	printf("D *prec 15 :		|%.*s%.*s|\n",15, str,15, str);
	printf("D *Prec 8 :		|%.*s%.*s|\n",8, str,8, str);
	printf("D L && P :		|%16.8s%16.8s|\n", str, str);
	printf("D *L && *P :		|%*.*s%*.*s|\n",16, 8, str,16, 8, str);
	printf("D l && P :		|%4.8s%4.8s|\n", str, str);
	printf("D *l && *P :		|%*.*s%*.*s|\n",4, 8, str,4, 8, str);
	printf("D L && p :		|%16.18s%16.18s|\n", str, str);
	printf("D *L && *p :		|%*.*s%*.*s|\n",16, 18, str,16, 18, str);
	printf("D l && p :		|%6.18s%6.18s|\n", str, str);
	printf("D *l && *p :		|%*.*s%*.*s|\n",6, 18, str,6, 18, str);
	return (1);
}
