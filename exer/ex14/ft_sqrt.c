/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 21:40:35 by severi            #+#    #+#             */
/*   Updated: 2021/10/28 22:16:18 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	result;
	int	counter;

	result = 0;
	counter = 0;
	while (result < nb)
	{
		counter++;
		result = counter * counter;
	}
	if ((counter * counter) == nb)
		return (counter);
	else
		return (0);
}
