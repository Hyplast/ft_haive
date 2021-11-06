/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:38:12 by severi            #+#    #+#             */
/*   Updated: 2021/11/02 00:27:10 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

void	print_argv(int args, char *argv[])
{
	int	i;

	i = 1;
	while (i < args)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
/*
** Sorting algorithm, bubble sort
**
*/

int	main(int args, char *argv[])
{
	int		i;
	int		j;
	char	*smallest;

	i = 1;
	j = 1;
	while (i < args)
	{
		while ((j + 1) < args)
		{
			if ((ft_strcmp(argv[j], argv[j + 1])) > 0)
			{
				smallest = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = smallest;
			}
			j++;
		}
		j = 1;
		i++;
	}
	print_argv(args, argv);
	return (0);
}
