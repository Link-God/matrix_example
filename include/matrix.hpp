#include <iostream>

template <typename T>
class matrix_t {
private:
	T ** elements_;
	std::size_t rows_;
	std::size_t collumns_;
public:
	matrix_t();
	matrix_t( matrix_t const & other );
	matrix_t<T> & operator =( matrix_t<T> const & other );
	~matrix_t();

	std::size_t rows() const;
	std::size_t collumns() const;

	matrix_t<T> operator +( matrix_t<T> const & other ) const;
	matrix_t<T> operator -( matrix_t<T> const & other ) const;
	matrix_t<T> operator *( matrix_t<T> const & other ) const;

	matrix_t<T> & operator -=( matrix_t<T> const & other );
	matrix_t<T> & operator +=( matrix_t<T> const & other );
	matrix_t<T> & operator *=( matrix_t<T> const & other );

	std::istream & read( std::istream & stream );
	std::ostream & write( std::ostream  & stream ) const;
	
	bool test (matrix_t<T> const & mat1 , *char op const  , matrix_<T> const & mat2);
};
