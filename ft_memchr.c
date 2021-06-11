/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_memchr.c                                              :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/06/06 11:39:17 by sjuanena                #+#    #+#          */
/*Updated: 2021/06/06 11:39:17 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (str[i]);
		i++;
	}
	return (NULL);
}
