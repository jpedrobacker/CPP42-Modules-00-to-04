/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbergfel <jbergfel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:55:21 by jbergfel          #+#    #+#             */
/*   Updated: 2024/10/18 01:02:58 by jbergfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int n, std::string name)
{
	Zombie	*zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return (zombies);
}
