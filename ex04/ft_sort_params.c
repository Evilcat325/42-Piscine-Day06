/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 13:54:12 by seli              #+#    #+#             */
/*   Updated: 2018/09/26 15:17:22 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_str_sort(int n, unsigned char **strlist);
int		ft_strcmp(unsigned char *s1, unsigned char *s2);
void	ft_swap_p(unsigned char **p1, unsigned char **p2);

int		main(int argc, char **argv)
{
	int		i;
	char	*head;

	if (argc <= 1)
		return (0);
	ft_str_sort(argc, (unsigned char **)argv);
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

void	ft_str_sort(int n, unsigned char **strlist)
{
	int	i;

	while (n > 0)
	{
		i = 1;
		while (i + 1 < n)
		{
			if (ft_strcmp(strlist[i], strlist[i+1]) > 0)
				ft_swap_p(&strlist[i], &strlist[i+1]);
			i++;
		}
		n--;
	}
}

void	ft_swap_p(unsigned char **p1, unsigned char **p2)
{
	unsigned char	*tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int	ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
