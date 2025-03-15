/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdaniel- <rdaniel-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:08:54 by rdaniel-          #+#    #+#             */
/*   Updated: 2025/03/09 14:55:31 by rdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Fatorial de 5: %d\n", ft_iterative_factorial(5));
	printf("Fatorial de 0: %d\n", ft_iterative_factorial(0));
	printf("Fatorial de -3: %d\n", ft_iterative_factorial(-3));
	return (0);
} */
