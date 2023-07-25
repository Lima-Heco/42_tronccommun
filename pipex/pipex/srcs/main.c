
#include "../pipex.h"


int	main(int ac, char **av, char **envp)
{
	int	file1;
	int file2;

	if (ac != 5)
		return(ft_printerror("mauvais arguments"));
	file1 = open(av[1], O_RDONLY);
	//file2 = open(ag[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if(file1 < 0)
		return (ft_printerror(strerror(errno)));
}
