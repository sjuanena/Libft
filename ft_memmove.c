/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_memmove.c                                             :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/06/06 10:35:05 by sjuanena                #+#    #+#          */
/*Updated: 2021/06/06 10:35:05 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	strs = (unsigned char *) src;
	strd = (unsigned char *) dst;
	i = 0;
	if (strs < strd)
		while (--len >= 0)
			strd[len] = strs[len];
	else
		while (i < len)
		{
			strd[i] = strs[i];
			i++;
		}
	return (srtd);
}
