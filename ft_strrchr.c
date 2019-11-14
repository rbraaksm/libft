/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:13:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/10/31 12:00:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		x;

	i = ft_strlen(s);
	x = 0;
	while (s[i] != s[x])
	{
		if (s[i] == (unsigned char)c)
			return ((char*)&(s[i]));
		i--;
	}
	if (s[x] == (unsigned char)c)
		return ((char*)&(s[x]));
	return (NULL);
}
