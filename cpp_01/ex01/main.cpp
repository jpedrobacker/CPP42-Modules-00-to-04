/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:54:33 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 01:04:09 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	n = 4;
	Zombie	*zombieHorde = Zombie::zombieHorde(n, "Joao");

	zombieHorde[2].setName("Pedro");
	zombieHorde[0].setName("Backer");

	for (int i = 0; i < 4; i++)
		zombieHorde[i].announce();
	delete [] zombieHorde;
	return (0);
}
