/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpathjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadam <cadam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/02 16:29:52 by cadam             #+#    #+#             */
/*   Updated: 2015/10/28 20:34:45 by cadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** join <s1,'/',s2>
*/

char	*ft_strpathjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*s3;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (!s1 || !s2)
		return ((s1) ? ft_strdup(s1) : ft_strdup(s2));
	j = ft_strlen(s1);
	if (s1[j - 1] == '/' || s2[0] == '/')
		return ((s1[j - 1] == '/' && s2[0] == '/') ?
		ft_strjoin(s1, ++s2) : ft_strjoin(s1, s2));
		if (!(s3 = (char *)malloc((j + ft_strlen(s2) + 2))))
		return (NULL);
	i = 0;
	ft_strcpy(s3, s1);
	s3[j++] = '/';
	while (s2[i])
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s3);
}
