
#include <stdio.h>
#include <fcntl.h>
#include "ft_printf.h"

int			pouet(char *str)
{
	int		fd;

	system("rm -f ptest.txt");
	fd = open("ptest.txt", O_RDWR | O_CREAT, S_IRUSR | S_IRGRP | S_IWUSR | S_IWGRP);
	dprintf(fd, "p test :\n");
	dprintf(fd, "");
	dprintf(fd, "\n");
	dprintf(fd, "%p", str);
	dprintf(fd, "\n%p", str);
	dprintf(fd, "\nEssai : 		|%p|\n", str);
	dprintf(fd, "Double : 		|%p%p|\n", str, str);
	dprintf(fd, "Larg 16 :		|%16p|\n", str);
	dprintf(fd, "*Larg 16 :		|%*p|\n",16, str);
	dprintf(fd, "larg 6 :		|%6p|\n", str);
	dprintf(fd, "*larg 6 :		|%*p|\n",6, str);
	dprintf(fd, "*Larg -16 :		|%*p|\n",-16, str);
	dprintf(fd, "Prec . :		|%.p|\n", str);
	dprintf(fd, "NULL - :		|%-*p|\n",10, NULL);
	dprintf(fd, "NULL L :		|%*p|\n",10, NULL);
	dprintf(fd, "\n--------DOUBLE------:\n\n");
	dprintf(fd, "D Larg 16 :		|%16p%16p|\n", str, str);
	dprintf(fd, "D *Larg 16 :		|%*p%*p|\n",16, str,16, str);
	dprintf(fd, "D larg 6 :		|%6p%6p|\n", str, str);
	dprintf(fd, "D *larg 6 :		|%*p%*p|\n",6, str,6, str);
	dprintf(fd, "D *Larg -16 :		|%*p%*p|\n",-16, str,-16, str);
	dprintf(fd, "D Prec . :		|%.p%.p|\n", str, str);
	dprintf(fd, "-------p = NULL -------\n");
	dprintf(fd, "NULL alone :		|%p|\n", NULL);
	dprintf(fd, "NULL & p = .:		|%.p|\n", NULL);
	dprintf(fd, "NULL, p=. L2:		|%2.p|\n", NULL);
	dprintf(fd, "NULL, p=. L3:		|%3.p|\n", NULL);
	return (1);
}

int			main(void)
{
	char	*str;

	str = "Hello World!";
	pouet(str);
	ft_printf("p test :\n");
	ft_printf("");
	ft_printf("\n");
	ft_printf("%p", str);
	ft_printf("\n%p", str);
	ft_printf("\nEssai : 		|%p|\n", str);
	ft_printf("Double : 		|%p%p|\n", str, str);
	ft_printf("Larg 16 :		|%16p|\n", str);
	ft_printf("*Larg 16 :		|%*p|\n",16, str);
	ft_printf("larg 6 :		|%6p|\n", str);
	ft_printf("*larg 6 :		|%*p|\n",6, str);
	ft_printf("*Larg -16 :		|%*p|\n",-16, str);
	ft_printf("Prec . :		|%.p|\n", str);
	ft_printf("NULL - :		|%-*p|\n",10, NULL);
	ft_printf("NULL L :		|%*p|\n",10, NULL);
	ft_printf("\n--------DOUBLE------:\n\n");
	ft_printf("D Larg 16 :		|%16p%16p|\n", str, str);
	ft_printf("D *Larg 16 :		|%*p%*p|\n",16, str,16, str);
	ft_printf("D larg 6 :		|%6p%6p|\n", str, str);
	ft_printf("D *larg 6 :		|%*p%*p|\n",6, str,6, str);
	ft_printf("D *Larg -16 :		|%*p%*p|\n",-16, str,-16, str);
	ft_printf("D Prec . :		|%.p%.p|\n", str, str);
	ft_printf("-------p = NULL -------\n");
	ft_printf("NULL alone :		|%p|\n", NULL);
	ft_printf("NULL & p = .:		|%.p|\n", NULL);
	ft_printf("NULL, p=. L2:		|%2.p|\n", NULL);
	ft_printf("NULL, p=. L3:		|%3.p|\n", NULL);
	return (1);
}
