/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:43:37 by sjuanena          #+#    #+#             */
/*   Updated: 2021/05/31 18:17:37 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) s;
	while (i <= n)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}