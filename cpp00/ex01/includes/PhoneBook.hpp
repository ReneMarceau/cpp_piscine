/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rene <rene@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:29:54 by rene              #+#    #+#             */
/*   Updated: 2023/08/18 13:29:56 by rene             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>

# include "Contact.hpp"

class PhoneBook {
public:
    // Constructor & Destructor
    PhoneBook(void);
    ~PhoneBook(void);

    void addContact(void);
    void searchContact(void);

private:
    Contact _contacts[8];
    int     _nbContacts;
};

void    print_info(void);
void    shift_and_insert(Contact (&contacts)[8], Contact &contact, int &nbContacts);
bool    fill_contact_form(Contact &contact);
void    print_contact_table(Contact (&contacts)[8], int nbContacts);

#endif