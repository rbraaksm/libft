/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 10:35:03 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/11/05 10:35:06 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		*ft_fill_str(char *new_str, int size, int n)
{
	char		*tmp;

	tmp = new_str;
	size = size - 1;
	if (n == 0)
	{
		tmp[0] = 48;
		return (new_str);
	}
	if (n < 0)
	{
		tmp[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		tmp[size] = 48 + (n % 10);
		n = n / 10;
		size--;
	}
	return (tmp);
}

static int		ft_size(int n)
{
	int			size;

	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char		*ft_minvalue(char *str, int n)
{
	char		*new_str;
	int			size;

	size = 9;
	new_str = str;
	new_str[size + 2] = '\0';
	new_str[size + 1] = 48 + 8;
	new_str[0] = '-';
	n = 214748364;
	while (n > 0)
	{
		new_str[size] = 48 + (n % 10);
		n = n / 10;
		size--;
	}
	return (new_str);
}

char			*ft_itoa(int n)
{
	char		*new_str;
	int			size;
	int			num;

	num = n;
	if (n == -2147483648)
	{
		new_str = (char*)malloc(sizeof(char) * 11 + 1);
		new_str = ft_minvalue(new_str, n);
		return (new_str);
	}
	size = ft_size(n);
	if (num == 0)
		size = 1;
	new_str = (char*)malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	if (n == 0)
		new_str[size - 1] = 0;
	new_str = ft_fill_str(new_str, size, num);
	new_str[size] = '\0';
	return (new_str);
}
