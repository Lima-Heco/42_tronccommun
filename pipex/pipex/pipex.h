#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <errno.h>
# include <unistd.h>
# include "libs/libft.h"

typedef struct	t_pipe
{	
	char	*cmd;
	char	**path;
	char	*args[100];
	int		f;

}				t_pipe;

#endif