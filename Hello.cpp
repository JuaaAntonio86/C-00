#include "Hello.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Hello::Hello()
{
}

Hello::Hello( const Hello & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Hello::~Hello()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Hello &				Hello::operator=( Hello const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Hello const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */