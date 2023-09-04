/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:45:41 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:46:23 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
public:
    // Constructor & Destructor
    Weapon(std::string type);
    ~Weapon(void);

    // Getter
    const std::string &getType(void) const;

    // Setter
    void setType(std::string newType);

private:
    std::string _type;
};

#endif