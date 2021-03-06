/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:25:25 by darabi            #+#    #+#             */
/*   Updated: 2015/12/11 16:22:55 by darabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		exit_with_message("Only one argument.");
	fd = open(argv[1], O_RDWR);
	if (fd <= 0)
		exit_with_message("Problème fd");
	checking_file(argv[1], fd);
	close(fd);
	return (1);
}
