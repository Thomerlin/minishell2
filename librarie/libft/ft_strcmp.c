/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:18:39 by rruiz-la          #+#    #+#             */
/*   Updated: 2022/06/22 21:50:05 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	len1;
	int	len2;

	i = 0;
	len1 = 0;
	len2 = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (1);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 != len2)
		return (1);
	while (i < len1)
	{
		len2 = s1[i] - s2[i];
		i++;
	}
	if (len2 == 0)
		return (0);
	else
		return (1);
}
