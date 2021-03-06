/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadam <cadam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 11:37:49 by cadam             #+#    #+#             */
/*   Updated: 2015/04/04 11:49:58 by cadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int n, int p)
{
	int	ret;

	ret = 1;
	if (p == 0)
		return (1);
	while (p)
	{
		ret = ret * n;
		p--;
	}
	return (ret);
}
