/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhossan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 21:25:51 by akhossan          #+#    #+#             */
/*   Updated: 2019/03/28 21:33:14 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	i = 1;
	while (++i <= nb)
		factorial *= i;
	return (factorial);
}
