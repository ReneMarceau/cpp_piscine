/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 00:03:20 by rene              #+#    #+#             */
/*   Updated: 2023/08/29 22:26:36 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
    // Constructors
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(const FragTrap &other);

    // Assignment operator
    FragTrap& operator=(const FragTrap &other);

    // Destructor
    ~FragTrap(void);

    // Member functions
    void attack(const std::string &target);
    void highFivesGuys(void);
};

#endif