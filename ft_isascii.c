/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_isascii.c                                             :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/05/26 15:28:40 by sjuanena                #+#    #+#          */
/*Updated: 2021/05/26 15:28:40 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	isascii(int c)
{
	int	i;

	i = 0;
	if (c >= 0 && c <= 127)
		i = 1;
	else
		i = 0;
	return (i);
}
