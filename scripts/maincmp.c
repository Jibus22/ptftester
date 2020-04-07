
#include <stdio.h>
#include "libft.h"

int			main(void)
{
	char	*ftptf;
	char	*ptf;
	int		fd1;
	int		fd2;
	int		fd3;
	int		ret;
	int		i;
	int		e;
	
	ret = 1;
	i = 0;
	e = 0;
	fd1 = open("ftptf.txt", O_RDWR | O_CREAT, S_IRUSR | S_IRGRP);
	fd2 = open("ptf.txt", O_RDWR | O_CREAT, S_IRUSR | S_IRGRP);
	fd3 = open("res.log", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IRGRP);
	while (ret > 0)
	{
		e++;
		get_next_line(fd1, &ftptf);
		ret = get_next_line(fd2, &ptf);
		if ((ft_strncmp(ftptf, ptf, ft_strlen(ptf))))
		{
			i++;
			dprintf(fd3, "\n\033[0;31mError line %d on this :\033[0m\nYour ft_printf :\t\033[0;31m%s\033[0m\nTrue printf :\t\t\033[0;32m%s\033[0m\n", e - 1, ftptf, ptf);
		}
		free(ftptf);
		free(ptf);
	}
	if (i > 0)
	{
		printf("\n\033[0;31mYou have %d/%d error(s).\n\033[0;94mCheck res.log appearing below :\033[0m\n", i, e - 1);
		system("cat res.log");
	}
	else
	{
		printf("\n\033[0;32mNo errors detected : %d/%d. Nice !\033[0m\n", e - 1, e - 1);
		system("rm -f res.log");
	}
	return (1);
}
