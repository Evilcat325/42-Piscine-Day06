/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 10:52:28 by seli              #+#    #+#             */
/*   Updated: 2018/09/26 11:03:20 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int args, char **argv)
{
	char *head;

	if (args == 0)
		return (0);
	head = argv[0];
	while (head && *head)
		ft_putchar(*head++);
	ft_putchar('\n');
	return (0);
}
