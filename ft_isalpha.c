/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 20:45:18 by sjuanena          #+#    #+#             */
/*Updated: 2021/05/26 14:40:46 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		i = 1;
	else
		i = 0;
	return (i);
}
