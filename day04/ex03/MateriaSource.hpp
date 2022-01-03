#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _memory[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &ref);
		virtual ~MateriaSource();

		MateriaSource &operator=(MateriaSource const &ref);

		void learnMateria(AMateria* materia);        
        AMateria *createMateria(std::string const &type);
};

#endif