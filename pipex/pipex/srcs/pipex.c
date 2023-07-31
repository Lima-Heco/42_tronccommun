#include "../pipex.h"

void	init_cmd(t_pipe *c, int f)
{
	c->f = f;
	c->path = 0;
	c->cmd = 0;
	c->args[0] = 0;
}

void	pipex(int *file1, int *file2, char **av, char **envp)
{
	t_pipe cmd1;
	t_pipe cmd1;

	init_cmd(&cmd1, file1);
	init_cmd(&cmd2, file2);

}