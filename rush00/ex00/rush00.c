/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souassin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 11:34:35 by souassin          #+#    #+#             */
/*   Updated: 2020/10/17 13:45:09 by cmoyal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		l;
	int		h;

	h = 0;
	while (h++ < y)
	{
		l = 0;
		while (l++ < x)
		{
			if (h == 1 || h == y)
			{
				if (l * h != y && l * h != x)
					ft_putchar((l == 1 || l == x) ? ('o') : ('-'));
				else
					ft_putchar((l == 1 || l == x) ? ('o') : ('-'));
			}
			else
				ft_putchar((l == 1 || l == x) ? ('|') : (' '));
		}
		ft_putchar('\n');
	}
}
