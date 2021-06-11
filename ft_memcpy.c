/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_memcpy.c                                              :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/06/06 10:14:47 by sjuanena                #+#    #+#          */
/*Updated: 2021/06/06 10:14:47 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;

	strs = (unsigned char *) src;
	strd = (unsigned char *) dst;
	i = 0;
	while(i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (strd);
}
