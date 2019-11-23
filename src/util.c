/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UTIL.C                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:49:44 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/20 21:37:27 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binar.h"
int		ft_atoi(const char *str)
{
	long		i;
	long		number;
	int			sign;
	int			l_counter;

	l_counter = 0;
	sign = 1;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] != '\0')
	{
		if (l_counter > 13 && sign == -1)
			return (0);
		if (l_counter++ > 13 && sign == 1)
			return (-1);
		if (!(str[i] >= 48 && str[i] <= 57))
			return (number * sign);
		number = number * 10 + (str[i++] - 48);
	}
	return (number * sign);
}

void	*ft_bzero(char *b, size_t len)
{
	unsigned int i;

	i = 0;
	while (len > i)
	{
		((unsigned char*)b)[i] = '0';
		i++;
	}
	b[i] = '\0';
	return (0);
}

char	*ft_strjoin(char *s1, char *s2, int n)
{
	char	*str;
	int		i;
	int 	sln;

	i = 0;
	sln = ft_strlen(s1);
	if (s1 == NULL)
		sln = 0;
	if (!(str = (char *)malloc((ft_strlen(s1) +
						ft_strlen(s2)) * sizeof(char) + 1)))
		return (NULL);
	while (ft_strlen(s1))
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (ft_strlen(s2))
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	if (n == 1)
		str[i] = '.';
	if (n == 0)
		str[i] = '\0';
	return (str);
}
