/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chery <chery@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:08:52 by chery             #+#    #+#             */
/*   Updated: 2017/05/14 19:08:54 by chery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"hotrace.h"

int			hr_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int			hr_putstr(const char *str)
{
	int		i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
		++i;
	write(1, str, i);
	return (0);
}

int			hr_putendl(const char *str)
{
	if (hr_putstr(str))
		return (1);
	write(1, "\n", 1);
	return (0);
}
