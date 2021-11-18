#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>
#include <iostream>

class Karen {
	private:
		typedef struct s_KarenLevel {
     		std::string name;
       		void (Karen::*func)(void);
    	} KarenLevel;
		void	debug();
		void	info();
		void	warning();
		void	error();
	public:
		void	complain(std::string level);
};

#endif