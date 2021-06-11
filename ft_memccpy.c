/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_memccpy.c                                             :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/06/06 10:47:38 by sjuanena                #+#    #+#          */
/*Updated: 2021/06/06 10:47:38 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	*memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t			i;
	unsigned char	*strs;
	unsigned char	*strd;
	unsigned char	a;

	strs = (unsigned char *) src;
	strd = (unsigned char *) dst;
	a = (unsigned char) n;
	i = 0;
	while (i < n)
	{
		strd[i] = strs[i];
		if (strs[i] == a)
			return (strd[i + 1]);
		i++;
	}
	return (NULL);
}
