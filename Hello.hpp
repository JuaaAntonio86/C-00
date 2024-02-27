#ifndef HELLO_HPP
# define HELLO_HPP

# include <iostream>
# include <string>

class Hello
{

	public:

		Hello();
		Hello( Hello const & src );
		~Hello();

		Hello &		operator=( Hello const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Hello const & i );

#endif /* *********************************************************** HELLO_H */