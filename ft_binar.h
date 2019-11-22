/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binar.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:50:10 by aymaatou          #+#    #+#             */
/*   Updated: 2019/11/21 15:28:37 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int		ft_atoi(const char *str);
char	*ft_strjoin(char *s1, char *s2, int n);
char	*ft_binar(int nbr);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_bzero(char *b, size_t len);
char	*ft_binar(int nbr);
size_t	ft_strlen(const char *str);
