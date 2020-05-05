
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <limits.h>
#include "ft_printf.h"

int			main(void)
{
	char			*str;
	char			c;
	int				d;
	unsigned int	u;
	int				fd;

	system("rm -f tmp2.txt");
	fd = open("tmp2.txt", O_RDWR | O_CREAT, S_IRUSR | S_IRGRP | S_IWUSR | S_IWGRP);
	str = "Hello World!";
	c = 'Q';
	d = 42;
	u = 3554266;
	dprintf(fd, "?VO'voç'rrvr'3059\t\njif  ij  3412345567890?./+%%ù1@&–]8\n");
	dprintf(fd, "REBBER%cde%4cu%5.3s4ojr%*.57u554T3%pV%dR%04%vr\n", c, c, str, -20, u, str, -d);
	dprintf(fd, "%cR;:g4R%cde%4cu%-15.*s4ojr%*.57u554T3%pVR%04%vc\n",0, 0, c, -3, str, -20, u, NULL);
	dprintf(fd, "%*xRE%-20X%%BBER%cde%-12cu%5.3s4o%09d%09ir%*.57u554T3%pVR%04%va\n",30, u, u, c, 0, str, d, -d, -20, u, str);
	dprintf(fd, "54%%MezùEde%-10.*du%5.3s4ojr%*.57u554T3%pVR%04%vi\n", 20, d, NULL, -30, UINT_MAX, NULL);
	dprintf(fd, "REBBER%ide%4du%5.3s4ojr%*.57u554T3%pVR%04%vb", INT_MIN, INT_MAX, str, -20, u, str);
	ft_printf("?VO'voç'rrvr'3059\t\njif  ij  3412345567890?./+%%ù1@&–]8\n");
	ft_printf("REBBER%cde%4cu%5.3s4ojr%*.57u554T3%pV%dR%04%vr\n", c, c, str, -20, u, str, -d);
	ft_printf("%cR;:g4R%cde%4cu%-15.*s4ojr%*.57u554T3%pVR%04%vc\n",0, 0, c, -3, str, -20, u, NULL);
	ft_printf("%*xRE%-20X%%BBER%cde%-12cu%5.3s4o%09d%09ir%*.57u554T3%pVR%04%va\n",30, u, u, c, 0, str, d, -d, -20, u, str);
	ft_printf("54%%MezùEde%-10.*du%5.3s4ojr%*.57u554T3%pVR%04%vi\n", 20, d, NULL, -30, UINT_MAX, NULL);
	ft_printf("REBBER%ide%4du%5.3s4ojr%*.57u554T3%pVR%04%vb", INT_MIN, INT_MAX, str, -20, u, str);
	return (1);
}
