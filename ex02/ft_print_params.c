/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 11:36:26 by seli              #+#    #+#             */
/*   Updated: 2018/09/26 15:12:50 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*head;
	int		i;

	if (argc <= 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		head = argv[i];
		while (head && *head)
			ft_putchar(*head++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
