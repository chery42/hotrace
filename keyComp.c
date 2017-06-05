/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chery <chery@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/14 19:08:24 by chery             #+#    #+#             */
/*   Updated: 2017/05/14 19:08:26 by chery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"hotrace.h"

int			hr_keycmp(char *key1, char *key2, int k_len)
{
	int		cur;

	cur = -1;
	while (++cur < k_len && *key1 == *key2 && *key1)
	{
		key1++;
		key2++;
	}
	if (!cur)
		return (-42);
	if ((*key1 && !*key2) || (*key1 && k_len - cur == 0))
		return (-1);
	if (!*key1 && k_len - cur == 0)
		return (0);
	return (k_len - cur);
}
