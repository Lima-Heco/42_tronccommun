/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:17:21 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 16:19:35 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "../mlx/mlx.h"
# include "../libft/libft.h"

typedef struct mapassets_s
{
	int		x;
	int		y;
	int		p;
	int		c;
	int		cv;
	int		op;
	int		e;
	int		ev;
	int		x_p;
	int		y_p;
	int		i;
	char	*mp;
	char	*map_name;
	char	**map;
}	t_mapassets;

typedef struct mlassets_s
{
	int			x_p;
	int			y_p;
	int			c;
	int			pas;
	int			c_added;
	int			debug;
	int			frame;
	char		**map;
	void		*img_herbes_ptr;
	void		*img_mur_ptr;
	void		*img_mur_top_ptr;
	void		*img_gros_champi_stand1_ptr;
	void		*img_gros_champi_stand2_ptr;
	void		*img_gros_champi_stand3_ptr;
	void		*img_gros_champi_stand4_ptr;
	void		*img_petit_champi_ptr;
	void		*img_buisson_ptr;
	void		*mlx;
	void		*window;
	t_mapassets	*maps;
}	t_mlassets;

void	go_bot(t_mlassets *param);
void	go_top(t_mlassets *param);
void	go_left(t_mlassets *param);
void	go_right(t_mlassets *param);
void	ft_printerror(char *msg);
void	finds_pl(t_mapassets *maps, char **map);
void	ft_mur(t_mapassets *maps, char **map);
void	ft_collectibles(t_mapassets *maps, char **map);
void	ft_sorties(t_mapassets *maps, char **map);
void	ft_putx(t_mapassets *maps, char **map, int y, int x);
void	ft_countc(t_mapassets *maps, char **map, int y, int x);
void	ft_counte(t_mapassets *maps, char **map, int y, int x);
void	ft_free(t_mapassets *map, t_mlassets *supmlx);
void	ft_free2(t_mapassets *map);
int		put_img(t_mlassets *supmlx);
int		maptester(t_mapassets *maps);
int		img_init(t_mlassets *img);
int		y_maps(char *map_txt);
int		ft_pretrequis(char *map, t_mapassets *maps);
int		sprites(t_mlassets *supmlx);
int		maptester(t_mapassets *map);
int		x_maps(char *map_txt);
int		starter(char *fd);
int		ft_op(char *fd);
int		map_starter(t_mapassets map);
int		my_key_funct(int keycode, t_mlassets *param);
int		end(t_mlassets *param);
int		ft_mlx(t_mapassets *maps, t_mlassets *supmlx);
int		ft_open(char *fd, t_mapassets *maps);

#endif
