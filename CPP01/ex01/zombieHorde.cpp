/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaperalt <yaperalt@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 02:21:32 by yaperalt          #+#    #+#             */
/*   Updated: 2026/11/08 21:57:00 by yaperalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie* zombie_array = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombie_array[i].setName(name);
    }
    return zombie_array;
}