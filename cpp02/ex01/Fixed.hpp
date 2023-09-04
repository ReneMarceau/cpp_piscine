/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:13:01 by rene              #+#    #+#             */
/*   Updated: 2023/08/25 20:53:37 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
    // Constructors
    Fixed(void);
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &other);
    
    // Assignment operator
    Fixed& operator=(const Fixed &other);
    
    // Destructor
    ~Fixed(void);

    // Getter
    int getRawBits(void) const;
    
    // Setter
    void setRawBits(int const raw);

    // Converters
    int toInt(void) const;
    float toFloat(void) const;
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif