/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:38:57 by tmilhau           #+#    #+#             */
/*   Updated: 2023/07/22 23:42:50 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <unistd.h>
# include "libs/libft.h"

typedef struct t_util
{
	int	impelem;
	int	impindex;
}				t_util;

typedef struct t_lis
{
	int	*lis;
	int	*previousindex;
	int	*liselements;
	int	maxlength;
	int	currentindex;
	int	endindex;
	int	currentlis;
	int	i;
	int	j;
}				t_lis;

typedef struct t_lst
{
	int	*lsta;
	int	*lstb;
	int	len;
	int	lena;
	int	lenb;
	int	free_signal;
	int	leni;
	int	*num;
	int	min;
	int	mini;
	int	max;
	int	i;
}			t_lst;

//utils
int		startpush(int ac, char **av, t_lst *lst);
int		testchar(char **av);
int		ft_verif_double(t_lst *lst);
int		triverif(int *lst, int n);
int		findminindex(int *lst, int n);
int		preset2(t_lst *lst, int *lis, int lenlis);
int		preset(t_lst *lst, int *lis);
int		findmaxa(t_lst *lst);
int		wherelis(t_lst *lst, int *lis);
void	findmin(t_lst *lst);
void	printerror(char *str);
void	ft_free(t_lst *lst);
void	moovbot(int *lst, int i, int lstn);
void	wmoovbot(int *lst, int lstn);
void	moovtop0(int *lst, int i);
void	moovtop1(int *lst, int i);
void	printlst(t_lst *lst);
void	putba(t_lst *lst);

//regles
void	sa(t_lst *lst, int ab);
void	sb(t_lst *lst, int ab);
void	ss(t_lst *lst);

void	pa(t_lst *lst);
void	pb(t_lst *lst);

void	ra(t_lst *lst, int ab);
void	rb(t_lst *lst, int ab);
void	rr(t_lst *lst);

void	rra(t_lst *lst, int ab);
void	rrb(t_lst *lst, int ab);
void	rrr(t_lst *lst);
//algo

void	algomain(t_lst *lst);
void	monalgo(t_lst *lst);
int		*findlis(int arr[], int n, int *lisLength);

//b2a
void	goodb2a(t_lst *lst);
//1
void	goodb2a0(t_lst *lst);
//2
void	goodrb2a1(t_lst *lst);
//3
void	goodb2a1(t_lst *lst);
//4
void	goodrb2a2(t_lst *lst);
//5
void	goodb2a2(t_lst *lst);
//6
void	goodrb2a3(t_lst *lst);
//7
void	goodb2a3(t_lst *lst);
//8
void	goodrb2a4(t_lst *lst);
//9
void	goodb2a4(t_lst *lst);
//10
void	goodrb2a5(t_lst *lst);
//11
void	goodb2a5(t_lst *lst);
//12
void	goodrb2a6(t_lst *lst);
//13
void	goodb2a6(t_lst *lst);
//14
void	goodrb2a7(t_lst *lst);

#endif
