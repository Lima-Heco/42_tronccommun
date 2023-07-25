/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:48:24 by lheinric          #+#    #+#             */
/*   Updated: 2023/07/04 15:09:11 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stddef.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_ismaj(char c);
int		ft_ismin(char c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_printf(const char *str, ...);
int		ft_types(va_list args, const char ch);
int		ft_print_char(int c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long long ptr);
int		ft_ptr_len(uintptr_t num);
int		ft_printnbr(int n);
int		ft_num_len(unsigned int num);
int		ft_print_unsigned(unsigned int n);
int		ft_hex_len(unsigned int num);
int		ft_print_pourcent(void);
int		ft_print_hex(unsigned int num, const char format);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t num, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_uitoa(unsigned int n);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char *s1, char *s2, int fd);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*get_next_line(int fd);
char	*start(int fd);
void	*get_calloc(size_t nmemb, size_t size);
char	*ft_is_no_nl(char *trash, int i);
char	*add_to_str(char *trash, int fd, int i);
char	*output_strs(char *trash, int end);
char	*trim_str(char *trash, int i);
char	**ft_split(char const *s, char c);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_put_hex(unsigned int num, const char format);
void	ft_put_ptr(uintptr_t num);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
