#ifndef PHONEBOOK_HPP
# include "Contact.hpp"
# include "common.hpp"

class PhoneBook {
	public:
		int		index;
		Contact	contacts[8];

		void	add_Contact();
		void	search_Contact();
};

#endif