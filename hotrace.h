/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chery <chery@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:08:39 by chery             #+#    #+#             */
/*   Updated: 2017/05/14 19:08:40 by chery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef				HOTRACE_H
# define			HOTRACE_H
# define BUFF_SIZE	720
# define MERGE		(void *)1
typedef struct		s_btree
{
	char			*key;
	char			*value;
	int				k_len;
	struct s_btree	*neighbours;
	struct s_btree	*children;
}					t_btree;
/*
** STRING
*/
int					hr_strlen(const char *str);
int					hr_putstr(const char *str);
int					hr_putendl(const char *str);
/*
** GNL
*/
int					hr_gnl(int const fd, char **line);
/*
** BTREE
*/
void				hr_btree_add(char *key, char *value, t_btree **root);
t_btree				*hr_btree_new(char *key, char *value);
char				*hr_btree_search(char *key, t_btree *root);
t_btree				*hr_btree_merge(t_btree **node, int ret,
									char *key, char *value);
//void				hr_btree_destroy(t_btree *node);
/*
** COMP
*/
int					hr_keycmp(char *key1, char *key2, int k_len);
#endif				/* !HOTRACE_H */
