/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacoetze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:13:40 by jacoetze          #+#    #+#             */
/*   Updated: 2020/07/16 16:19:53 by jacoetze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

void	rush(int x, int y)
{
	int i;
	int h;

	i = 5;
	h = 5;
	if (i > 0)
		ft_putchar('o');
	while (i <= h)
	{
		if (i >= 3)
		{
			ft_putchar('-');
		}
		else if(h >= 3 && (y - 2))
 	    {
			ft_putchar('|');
		}
		else if(i != 0 && i != x && h != 0 && h != y) 
	    {
			ft_putchar(' ');
		}
				i++;
			}
			h++;
			ft_putchar('\n');
}

int	main(void)
{
	rush(5, 5);
	return(0);
}
