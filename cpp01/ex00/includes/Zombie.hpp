/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:37:46 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:37:56 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
public:
    // Constructor & Destructor
    Zombie(std::string name);
    ~Zombie(void);

    // Member functions
    void announce(void);

    // Getters
    std::string getName(void) const;

    // Setters
    void setName(std::string name);

private:
    std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif