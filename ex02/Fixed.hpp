#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

	public:

		Fixed( void );
		Fixed( const int i);
		Fixed( const float f);
		Fixed( Fixed const & src );
		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		bool &	operator<( Fixed const & rhs ) const;
		bool &	operator>( Fixed const & rhs ) const;
		bool &	operator>=( Fixed const & rhs ) const;
		bool &	operator<=( Fixed const & rhs ) const;
		bool &	operator==( Fixed const & rhs ) const;
		bool &	operator!=( Fixed const & rhs ) const;

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

		int					_value;
		static const int	_nOfBitsFraction;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
