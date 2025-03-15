/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 06:34:06 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/09 15:17:10 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	i = 0;
	res = 0;
	while (res < nb && i <= 46340)
	{
		res = i * i;
		i++;
	}
	if (res != nb)
		return (0);
	return (i - 1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Raiz de 16: %d\n", ft_sqrt(16));
	printf("Raiz de 25: %d\n", ft_sqrt(25));
	printf("Raiz de 2: %d\n", ft_sqrt(2));
	printf("Raiz de -1: %d\n", ft_sqrt(-1));
	printf("Raiz de 0: %d\n", ft_sqrt(0));
	printf("Raiz de 2147395600: %d\n", ft_sqrt(2147395600));
	return (0);
} */
