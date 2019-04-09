/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhossan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:04:22 by akhossan          #+#    #+#             */
/*   Updated: 2019/03/29 11:40:57 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	char	buf[1];
	int		fd;

	if (ac != 2)
	{
		if (ac > 2)
			write(2, ARGC_ERROR, 20);
		else if (ac < 2)
			write(2, FILE_ERROR, 19);
		return (1);
	}
	if ((fd = open(av[1], O_RDONLY)) < 0)
		return (1);
	while (read(fd, buf, 1) > 0)
		write(1, buf, 1);
	close(fd);
	return (0);
}
