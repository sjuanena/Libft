/* ************************************************************************** */
/*                                                                            */
/*                                                           :::      ::::::::*/
/*ft_memcmp.c                                              :+:      :+:    :+:*/
/*                                                       +:+ +:+         +:+  */
/*By: sjuanena <sjuanena@student.42urduliz.com>        +#+  +:+       +#+     */
/*                                                   +#+#+#+#+#+   +#+        */
/*Created: 2021/06/06 11:50:38 by sjuanena                #+#    #+#          */
/*Updated: 2021/06/06 11:50:38 by sjuanena               ###   ########.fr    */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while ((i < n) && (n > 0))
	{
		if (str1[i] != str2[i])
			return ((int) (str1[i] - str2[i]));
		i++;
	}
	return (0);
}
