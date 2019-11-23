/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:43:08 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/22 14:46:22 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:18:45 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/22 14:40:02 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binar.h"

char *ip_to_binar(char *ip, int index)
{
	char **r_adress;
	char *ip_b;
	int i = 0;
	
	ip_b = malloc(sizeof(char) * 32 + 1);
	ip_b[32] = '\0';
	r_adress = ft_split(ip, '.');
	while (i < 4)
	{
		if (i == 3)
		{
			ip_b = ft_strjoin(ip_b, ft_binar(ft_atoi(r_adress[i])), 0);
			break ;
		}
		ip_b = ft_strjoin(ip_b, ft_binar(ft_atoi(r_adress[i])), index);
		i++;
	}
	free(r_adress);
	return (ip_b);
}

int ip_range(char *ip, int mask)
{
	int i;
	int range;

	i = 0;
	while (mask <= 32)
	{
		if (ip[mask] == '0')
			i++;
		mask++;
	}
	range = pow (2, i) - 2;
	return (range);
}
char *ft_binar(int nbr)
{
	char *binar = malloc (9);
	int value[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	int i = 0;
	ft_bzero(binar, 8);
	while (i < 8)
	{
		if (nbr - value[i] >= 0)
		{
			binar[i] = '1';
			nbr -= value[i];
		}
		i++;
	}
	return (binar);
}


int    main(int ac, char **av)
{
	if (ac == 2)
	{
		
   char *ip = ip_to_binar(av[1], 1);	
	printf("\033[0;31m"); 
	printf("(");

	printf("\033[0m"); 	
	printf("%s", av[1]);

	printf("\033[0;31m"); 
   printf(") BINARY IP ADRESS IS----\n");
	printf("\033[0m"); 	
	printf("\033[0;32m");
	printf("%s\n", ip);
		return (0);
	}
	if (ac == 3)
	{

   char *ip = ip_to_binar(av[1], 0);	
	printf("\033[0;31m"); 
	printf("----YOUR HOST RANGE IS-------\n");
	printf("\033[0m"); 	
	printf("\033[0;32m");
	printf("%d\n", ip_range(ip, ft_atoi(av[2])));
	return (0);
	}
	return (0);
}


